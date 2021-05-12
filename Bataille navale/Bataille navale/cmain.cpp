#include "cmain.h"



wxBEGIN_EVENT_TABLE(cmain, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

cmain::cmain() : wxFrame(nullptr, wxID_ANY, "Bataille Navale", wxPoint(30, 30), wxSize(1400, 800))
{



	// l'attack tabda menna normalement!!!

	btn = new wxButton*[nFieldWidth * nFieldHeight];


	wxPanel* wesst = new wxPanel(this, wxID_ANY, wxPoint(575, 100), wxSize(350, 500));
	wxPanel* tahtjoueur1 = new wxPanel(this, wxID_ANY, wxPoint(10, 620), wxSize(500, 150));
	wxPanel* tahtjoueur2 = new wxPanel(this, wxID_ANY, wxPoint(995, 620), wxSize(500, 150));


	wxPanel* panel1 = new wxPanel(this, wxID_ANY, wxPoint(10, 100), wxSize(500, 500));
	wxPanel* panel2 = new wxPanel(this, wxID_ANY, wxPoint(995, 100), wxSize(500, 500));



	m_btn1 = new wxButton(wesst, 10001, "Entrer vos pseudos", wxPoint(95, 10), wxSize(160, 80));
	m_txt1 = new wxTextCtrl(wesst, wxID_ANY, "", wxPoint(95, 120), wxSize(150, 30));
	m_list1 = new wxListBox(wesst, wxID_ANY, wxPoint(95, 250), wxSize(150, 30));





	wxGridSizer *grid1 = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);
	wxGridSizer *grid2 = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	for (int x = 0; x < nFieldWidth; x++)
	{
		for (int y = 0; y < nFieldHeight; y++)
		{
			btn[y*nFieldHeight + x] = new wxButton(panel1, 10000 + (y * nFieldWidth + x));
			grid1->Add(btn[y* nFieldWidth + x], 1, wxEXPAND | wxALL);
			btn[y*nFieldHeight + x] = new wxButton(panel2, 20000 + (y * nFieldWidth + x));
			grid2->Add(btn[y* nFieldWidth + x], 1, wxEXPAND | wxALL);
		}
	}
	panel1->SetSizer(grid1);
	panel2->SetSizer(grid2);
	panel1->Layout();
	panel2->Layout();





}




cmain::~cmain()
{
	delete[]btn;
}
void cmain::OnButtonClicked(wxCommandEvent &evt)
{
	m_list1->AppendString(m_txt1->GetValue());
	evt.Skip();
}



