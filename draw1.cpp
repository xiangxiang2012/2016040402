// draw1.cpp : implementation file
//

#include "stdafx.h"
#include "2016040402.h"
#include "draw1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cdraw1

IMPLEMENT_DYNCREATE(Cdraw1, CFormView)

Cdraw1::Cdraw1()
	: CFormView(Cdraw1::IDD)
{
	//{{AFX_DATA_INIT(Cdraw1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

Cdraw1::~Cdraw1()
{
}

void Cdraw1::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cdraw1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cdraw1, CFormView)
	//{{AFX_MSG_MAP(Cdraw1)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cdraw1 diagnostics

#ifdef _DEBUG
void Cdraw1::AssertValid() const
{
	CFormView::AssertValid();
}

void Cdraw1::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// Cdraw1 message handlers
