#pragma once


// Cpage7 对话框

class Cpage7 : public CDialog
{
	DECLARE_DYNAMIC(Cpage7)

public:
	Cpage7(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage7();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
