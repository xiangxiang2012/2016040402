// 2016040402View.h : interface of the CMy2016040402View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_2016040402VIEW_H__7B3FC0D6_D1C6_416A_8D2C_E5F2C666B388__INCLUDED_)
#define AFX_2016040402VIEW_H__7B3FC0D6_D1C6_416A_8D2C_E5F2C666B388__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy2016040402View : public CView
{
protected: // create from serialization only
	CMy2016040402View();
	DECLARE_DYNCREATE(CMy2016040402View)

// Attributes
public:
	CMy2016040402Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2016040402View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy2016040402View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy2016040402View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 2016040402View.cpp
inline CMy2016040402Doc* CMy2016040402View::GetDocument()
   { return (CMy2016040402Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2016040402VIEW_H__7B3FC0D6_D1C6_416A_8D2C_E5F2C666B388__INCLUDED_)
