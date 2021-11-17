#pragma once


// Cpage4 对话框

class Cpage4 : public CDialog
{
	DECLARE_DYNAMIC(Cpage4)

public:
	Cpage4(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage4();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
