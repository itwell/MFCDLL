#pragma once


// Cpage8 对话框

class Cpage8 : public CDialog
{
	DECLARE_DYNAMIC(Cpage8)

public:
	Cpage8(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cpage8();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE8 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
