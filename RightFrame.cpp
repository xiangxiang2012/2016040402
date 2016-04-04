// RightFrame.cpp : implementation file
//

#include "stdafx.h"
#include "2016040402.h"
#include "RightFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRightFrame

IMPLEMENT_DYNCREATE(CRightFrame, CFrameWnd)

CRightFrame::CRightFrame()
{
}

CRightFrame::~CRightFrame()
{
}


BEGIN_MESSAGE_MAP(CRightFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CRightFrame)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRightFrame message handlers

BOOL CRightFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	m_pSplitter=new CSplitter1;
	m_pSplitter->Create(NULL,NULL,0l,CFrameWnd::rectDefault,this,VIEW_SPLITTER1,pContext);
	m_pSplitter->ShowWindow(SW_SHOW);
	m_pSplitter->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
	m_nCurrentViewID=VIEW_SPLITTER1;
	SetActiveView(m_pSplitter);

    m_pSplitter2=new CSplitter2;
	m_pSplitter2->Create(NULL,NULL,0l,CFrameWnd::rectDefault,this,VIEW_SPLITTER2,pContext);
	m_pSplitter2->ShowWindow(SW_HIDE);
    m_pSplitter2->SetDlgCtrlID(VIEW_SPLITTER1);

	RecalcLayout();

	return true;
}
