#include "wx/wxprec.h"
#include "wx/wx.h"
#include "wx/dcclient.h"
#include "Graph.h"


class DrawGraph : public wxPanel
{
	public: 
		DrawGraph(wxFrame* parent);
		void paintEvent(wxPaintEvent & evt);
		void drawGraph(wxDC& dc);
		
		DECLARE_EVENT_TABLE()
};


//class MyApp: public wxApp
//{
//	bool OnInit();
//	DrawGraph *drawPane;
//
//};


BEGIN_EVENT_TABLE(DrawGraph, wxPanel)
        EVT_PAINT(DrawGraph::paintEvent)
END_EVENT_TABLE()



void DrawGraph::drawGraph(wxDC& dc)
{
	dc.DrawText("testing", 40, 60);
        dc.SetBrush(*wxGREEN_BRUSH);
	dc.SetPen(wxPen(wxColor(255,0,0),5));
	dc.DrawRectangle(300, 100, 400, 200);

}


void DrawGraph::paintEvent(wxPaintEvent & evt)
{

	wxPaintDC dc(this);
	drawGraph(dc);

}



IMPLEMENT_APP(MyApp)

// This is executed upon startup, like 'main()' in non-wxWidgets programs.
 bool MyApp::OnInit()
 {
 	wxFrame *frame = new wxFrame(NULL, -1, "Graph", wxDefaultPosition);


	frame->CreateStatusBar(4, wxSTB_SIZEGRIP, -1, "Status name");
	frame->SetStatusText("status bar one", 0);
	frame->SetStatusText("status bar two", 1);
	frame->SetStatusText("status bar three", 2);
	frame->SetStatusText("status bar four", 3);




	
	DrawGraph *drawPane = new DrawGraph(frame);
	
	frame->Show();	
		
 	return true;
 
 }

DrawGraph::DrawGraph(wxFrame* parent) : wxPanel(parent)
{

}

