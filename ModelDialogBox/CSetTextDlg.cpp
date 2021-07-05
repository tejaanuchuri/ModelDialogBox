// CSetTextDlg.cpp : implementation file
//

#include "pch.h"
#include "ModelDialogBox.h"
#include "CSetTextDlg.h"
#include "afxdialogex.h"


// CSetTextDlg dialog

IMPLEMENT_DYNAMIC(CSetTextDlg, CDialog)

CSetTextDlg::CSetTextDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_SET_TEXT, pParent)
{

}

CSetTextDlg::~CSetTextDlg()
{
}

void CSetTextDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetTextDlg, CDialog)
END_MESSAGE_MAP()


// CSetTextDlg message handlers
