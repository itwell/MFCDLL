#pragma once


// Cpage2 对话框

class Cpage2 : public CDialog
{
	DECLARE_DYNAMIC(Cpage2)

public:
	Cpage2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
