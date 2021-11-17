// MFCDLL.cpp: 定义 DLL 的初始化例程。
//

#include "pch.h"
#include "framework.h"
#include "MFCDLL.h"
#include <stdio.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "CMainView.h"

//
//TODO:  如果此 DLL 相对于 MFC DLL 是动态链接的，
//		则从此 DLL 导出的任何调入
//		MFC 的函数必须将 AFX_MANAGE_STATE 宏添加到
//		该函数的最前面。
//
//		例如: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// 此处为普通函数体
//		}
//
//		此宏先于任何 MFC 调用
//		出现在每个函数中十分重要。  这意味着
//		它必须作为以下项中的第一个语句:
//		出现，甚至先于所有对象变量声明，
//		这是因为它们的构造函数可能生成 MFC
//		DLL 调用。
//
//		有关其他详细信息，
//		请参阅 MFC 技术说明 33 和 58。
//

// CMFCDLLApp

BEGIN_MESSAGE_MAP(CMFCDLLApp, CWinApp)
END_MESSAGE_MAP()


// CMFCDLLApp 构造

CMFCDLLApp::CMFCDLLApp()
{
	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的 CMFCDLLApp 对象

CMFCDLLApp theApp;

//线程回调函数返回的句柄
HANDLE g_hUIThread;

HANDLE g_hFreeThread;

//定义回调函数
void UIThread(void* Param)
{
	//保存游戏实例句柄
	HINSTANCE hResOld = AfxGetResourceHandle();

	//将游戏中的资源切换到我们的DLL中
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	AfxSetResourceHandle(theApp.m_hInstance);

	//创建界面出来
	CMainView* mainView = new CMainView();

	//将界面设置为模态框
	mainView->DoModal();

	delete mainView;
	mainView = NULL;

	//查看mainView指针的地址值
	//char str[100];
	//sprintf_s(str, "mainView的指针地址为%p", mainView);
	//MessageBoxA(NULL, str, 0, MB_OK);

	//关闭窗口,剔除DLL
	g_hFreeThread = CreateThread(NULL, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(FreeLibrary), theApp.m_hInstance, 0, 0);

	//释放界面线程句柄
	CloseHandle(g_hUIThread);
	//释放销毁线程的句柄
	CloseHandle(g_hFreeThread);

	//资源切换回去
	AfxSetResourceHandle(hResOld);
}

// CMFCDLLApp 初始化
// 入口方法
BOOL CMFCDLLApp::InitInstance()
{
	CWinApp::InitInstance();

	//开辟一个线程,执行UIThread函数
	g_hUIThread = ::CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)UIThread, NULL, 0, 0);
		
	return TRUE;
}
