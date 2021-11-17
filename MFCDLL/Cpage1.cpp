// Cpage1.cpp: 实现文件
//

#include "pch.h"
#include "MFCDLL.h"
#include "Cpage1.h"
#include "afxdialogex.h"


// Cpage1 对话框

IMPLEMENT_DYNAMIC(Cpage1, CDialog)

Cpage1::Cpage1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_PAGE1, pParent)
{

}

Cpage1::~Cpage1()
{
}

void Cpage1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cpage1, CDialog)
END_MESSAGE_MAP()


// Cpage1 消息处理程序
