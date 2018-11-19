#ifndef INCLUDED_DRAWGRAPH_H
#define INCLUDED_DRAWGRAPH_H






class DrawGraph : public wxPanel
{
        public:
                DrawGraph(wxFrame* parent);
                void paintEvent(wxPaintEvent & evt);
                void drawGraph(wxDC& dc);

                DECLARE_EVENT_TABLE()
};

DECLARE_APP(MyApp)

 #endif // INCLUDED_DRAWGRAPH_H

