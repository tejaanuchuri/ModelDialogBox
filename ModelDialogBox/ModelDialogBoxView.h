
// ModelDialogBoxView.h : interface of the CModelDialogBoxView class
//

#pragma once


class CModelDialogBoxView : public CView
{
protected: // create from serialization only
	CModelDialogBoxView() noexcept;
	DECLARE_DYNCREATE(CModelDialogBoxView)

// Attributes
public:
	CModelDialogBoxDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CModelDialogBoxView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ModelDialogBoxView.cpp
inline CModelDialogBoxDoc* CModelDialogBoxView::GetDocument() const
   { return reinterpret_cast<CModelDialogBoxDoc*>(m_pDocument); }
#endif

