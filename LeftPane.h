#if !defined(AFX_LEFTPANE_H__75E515F1_9067_4091_8AA0_00B085ABE8CF__INCLUDED_)
#define AFX_LEFTPANE_H__75E515F1_9067_4091_8AA0_00B085ABE8CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LeftPane.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLeftPane form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CLeftPane : public CFormView
{
protected:
	CLeftPane();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CLeftPane)

// Form Data
public:
	//{{AFX_DATA(CLeftPane)
	enum { IDD = IDD_LEFTPANE_FORMVIEW };
	CTreeCtrl	m_LeftTree;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLeftPane)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CLeftPane();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CLeftPane)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEFTPANE_H__75E515F1_9067_4091_8AA0_00B085ABE8CF__INCLUDED_)
