// CMainView.cpp: 实现文件
//

#include "pch.h"
#include "MFCDLL.h"
#include "CMainView.h"
#include "afxdialogex.h"
#include <Cpage1.h>
#include <Cpage2.h>
#include <Cpage3.h>
#include <Cpage4.h>
#include <Cpage5.h>
#include <Cpage6.h>
#include <Cpage7.h>
#include <Cpage8.h>

// CMainView 对话框

IMPLEMENT_DYNAMIC(CMainView, CDialog)

CMainView::CMainView(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_MAINVIEW, pParent)
{

}

CMainView::~CMainView()
{
	
}

void CMainView::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainView, CDialog)
END_MESSAGE_MAP()


// CMainView 消息处理程序
