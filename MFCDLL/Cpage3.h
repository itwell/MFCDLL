#pragma once


// Cpage3 对话框

class Cpage3 : public CDialog
{
	DECLARE_DYNAMIC(Cpage3)

public:
	Cpage3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
