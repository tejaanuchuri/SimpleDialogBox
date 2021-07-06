// CSetTextDlg.cpp : implementation file
//

#include "pch.h"
#include "SimpleDialogBox.h"
#include "CSetTextDlg.h"
#include "afxdialogex.h"


// CSetTextDlg dialog

IMPLEMENT_DYNAMIC(CSetTextDlg, CDialogEx)

CSetTextDlg::CSetTextDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SIMPLEDIALOGBOX_DIALOG, pParent)
{

}

CSetTextDlg::~CSetTextDlg()
{
}

void CSetTextDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetTextDlg, CDialogEx)
END_MESSAGE_MAP()


// CSetTextDlg message handlers
