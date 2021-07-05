
// ModelDialogBoxView.cpp : implementation of the CModelDialogBoxView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ModelDialogBox.h"
#endif

#include "ModelDialogBoxDoc.h"
#include "ModelDialogBoxView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CModelDialogBoxView

IMPLEMENT_DYNCREATE(CModelDialogBoxView, CView)

BEGIN_MESSAGE_MAP(CModelDialogBoxView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CModelDialogBoxView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CModelDialogBoxView construction/destruction

CModelDialogBoxView::CModelDialogBoxView() noexcept
{
	// TODO: add construction code here

}

CModelDialogBoxView::~CModelDialogBoxView()
{
}

BOOL CModelDialogBoxView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CModelDialogBoxView drawing

void CModelDialogBoxView::OnDraw(CDC* /*pDC*/)
{
	CModelDialogBoxDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CModelDialogBoxView printing


void CModelDialogBoxView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CModelDialogBoxView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CModelDialogBoxView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CModelDialogBoxView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CModelDialogBoxView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CModelDialogBoxView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CModelDialogBoxView diagnostics

#ifdef _DEBUG
void CModelDialogBoxView::AssertValid() const
{
	CView::AssertValid();
}

void CModelDialogBoxView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CModelDialogBoxDoc* CModelDialogBoxView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CModelDialogBoxDoc)));
	return (CModelDialogBoxDoc*)m_pDocument;
}
#endif //_DEBUG


// CModelDialogBoxView message handlers
