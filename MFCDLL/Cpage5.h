#pragma once


// Cpage5 对话框

class Cpage5 : public CDialog
{
	DECLARE_DYNAMIC(Cpage5)

public:
	Cpage5(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
