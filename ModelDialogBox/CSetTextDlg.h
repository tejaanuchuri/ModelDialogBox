#pragma once


// CSetTextDlg dialog

class CSetTextDlg : public CDialog
{
	DECLARE_DYNAMIC(CSetTextDlg)

public:
	CSetTextDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CSetTextDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_SET_TEXT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
