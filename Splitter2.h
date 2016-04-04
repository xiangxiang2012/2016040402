#if !defined(AFX_SPLITTER2_H__3B76E2C1_0AB2_44AF_B82D_32F0ECD969B5__INCLUDED_)
#define AFX_SPLITTER2_H__3B76E2C1_0AB2_44AF_B82D_32F0ECD969B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Splitter2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSplitter2 view

class CSplitter2 : public CView
{
protected:
	
	DECLARE_DYNCREATE(CSplitter2)

// Attributes
public:
  CSplitter2();           // protected constructor used by dynamic creation
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitter2)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CSplitter2();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CSplitter2)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CSplitterWnd m_wndSplitter2;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTER2_H__3B76E2C1_0AB2_44AF_B82D_32F0ECD969B5__INCLUDED_)
