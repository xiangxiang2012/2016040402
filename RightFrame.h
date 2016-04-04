#if !defined(AFX_RIGHTFRAME_H__5DC53756_5284_4F05_BCD1_E9B5A6E9D2BA__INCLUDED_)
#define AFX_RIGHTFRAME_H__5DC53756_5284_4F05_BCD1_E9B5A6E9D2BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RightFrame.h : header file
//
#include "Splitter1.h"
#include "Splitter2.h"
/////////////////////////////////////////////////////////////////////////////
// CRightFrame frame

class CRightFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CRightFrame)
protected:
	CRightFrame();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRightFrame)
	protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CRightFrame();

	// Generated message map functions
	//{{AFX_MSG(CRightFrame)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	UINT m_nCurrentViewID;
	CFrameWnd* m_pFrame;
	CSplitter2* m_pSplitter2;
	CSplitter1* m_pSplitter;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RIGHTFRAME_H__5DC53756_5284_4F05_BCD1_E9B5A6E9D2BA__INCLUDED_)
