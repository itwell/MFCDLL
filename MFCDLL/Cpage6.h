﻿#pragma once


// Cpage6 对话框

class Cpage6 : public CDialog
{
	DECLARE_DYNAMIC(Cpage6)

public:
	Cpage6(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage6();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
