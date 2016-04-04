#if !defined(AFX_DRAW1_H__398126CD_D5C9_4E98_8C50_6E43A1777F24__INCLUDED_)
#define AFX_DRAW1_H__398126CD_D5C9_4E98_8C50_6E43A1777F24__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// draw1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cdraw1 form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class Cdraw1 : public CFormView
{
protected:
	Cdraw1();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(Cdraw1)

// Form Data
public:
	//{{AFX_DATA(Cdraw1)
	enum { IDD = IDD_DRAW1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cdraw1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~Cdraw1();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(Cdraw1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW1_H__398126CD_D5C9_4E98_8C50_6E43A1777F24__INCLUDED_)
