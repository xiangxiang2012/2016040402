// 2016040402View.cpp : implementation of the CMy2016040402View class
//

#include "stdafx.h"
#include "2016040402.h"

#include "2016040402Doc.h"
#include "2016040402View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View

IMPLEMENT_DYNCREATE(CMy2016040402View, CView)

BEGIN_MESSAGE_MAP(CMy2016040402View, CView)
	//{{AFX_MSG_MAP(CMy2016040402View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View construction/destruction

CMy2016040402View::CMy2016040402View()
{
	// TODO: add construction code here

}

CMy2016040402View::~CMy2016040402View()
{
}

BOOL CMy2016040402View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View drawing

void CMy2016040402View::OnDraw(CDC* pDC)
{
	CMy2016040402Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View printing

BOOL CMy2016040402View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy2016040402View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy2016040402View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View diagnostics

#ifdef _DEBUG
void CMy2016040402View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2016040402View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2016040402Doc* CMy2016040402View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2016040402Doc)));
	return (CMy2016040402Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy2016040402View message handlers
