﻿#pragma once


// Cpage1 对话框

class Cpage1 : public CDialog
{
	DECLARE_DYNAMIC(Cpage1)

public:
	Cpage1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
