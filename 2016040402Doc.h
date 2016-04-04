// 2016040402Doc.h : interface of the CMy2016040402Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_2016040402DOC_H__0367F8C4_B8E4_4A4D_B25D_0AD1FCC66C24__INCLUDED_)
#define AFX_2016040402DOC_H__0367F8C4_B8E4_4A4D_B25D_0AD1FCC66C24__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy2016040402Doc : public CDocument
{
protected: // create from serialization only
	CMy2016040402Doc();
	DECLARE_DYNCREATE(CMy2016040402Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2016040402Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy2016040402Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy2016040402Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2016040402DOC_H__0367F8C4_B8E4_4A4D_B25D_0AD1FCC66C24__INCLUDED_)
