//---------------------------------------
#include <afxwin.h>   //MFC core and standard components
#include "resource.h"  //main symbols
//---------------------------------------
//Globals
//CEdit* TEST;
class GAME_FORM : public CDialog
{
public:
	GAME_FORM(CWnd* pParent = NULL) : CDialog(GAME_FORM::IDD, pParent) {};
	//Dialog data, name of dialog here
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX) { CDialog::DoDataExchange(pDX); };
	//Called right after constructor. Initialize things here
	virtual BOOL OnInitDialog()
	{
		CDialog::OnInitDialog();
		//TEST = (CEdit*)GetDlgItem(IDC_TEST);
		//TEST->SetWindowTextW(L"Hello!");
		return true;
	}

public:
	DECLARE_MESSAGE_MAP()
};

//Actural App
class TheGame : public CWinApp
{
public:
	TheGame() {};
	virtual BOOL InitInstance()
	{
		CWinApp::InitInstance();
		//SetRegistryKey(_T("Landkartenvertrieb"));
		GAME_FORM dlg;
		m_pMainWnd = &dlg;
		INT_PTR nResponse = dlg.DoModal();
		return false;
	}
};

//---------------------------------------------
//Need a Message Map Macro for both CDialog and CWinApp
BEGIN_MESSAGE_MAP(GAME_FORM, CDialog)
END_MESSAGE_MAP()
//---------------------------------------------

//Start application
TheGame theApp;