// 2016040402.h : main header file for the 2016040402 application
//

#if !defined(AFX_2016040402_H__918A5E69_64AA_4BC2_B80F_A3A0904EA165__INCLUDED_)
#define AFX_2016040402_H__918A5E69_64AA_4BC2_B80F_A3A0904EA165__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402App:
// See 2016040402.cpp for the implementation of this class
//

class CMy2016040402App : public CWinApp
{
public:
	CMy2016040402App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2016040402App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy2016040402App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2016040402_H__918A5E69_64AA_4BC2_B80F_A3A0904EA165__INCLUDED_)
