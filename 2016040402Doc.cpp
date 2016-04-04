// 2016040402Doc.cpp : implementation of the CMy2016040402Doc class
//

#include "stdafx.h"
#include "2016040402.h"

#include "2016040402Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402Doc

IMPLEMENT_DYNCREATE(CMy2016040402Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy2016040402Doc, CDocument)
	//{{AFX_MSG_MAP(CMy2016040402Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402Doc construction/destruction

CMy2016040402Doc::CMy2016040402Doc()
{
	// TODO: add one-time construction code here

}

CMy2016040402Doc::~CMy2016040402Doc()
{
}

BOOL CMy2016040402Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy2016040402Doc serialization

void CMy2016040402Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402Doc diagnostics

#ifdef _DEBUG
void CMy2016040402Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy2016040402Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402Doc commands
