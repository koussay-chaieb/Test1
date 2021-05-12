#pragma once
#include "wx/wx.h"


class cmain : public wxFrame
{
public:
	cmain();
	~cmain();
public:
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton** btn;

	wxButton *m_btn1 = nullptr;
	wxTextCtrl *m_txt1 = nullptr;
	wxListBox *m_list1 = nullptr;

	wxButton *m_btn2 = nullptr;
	wxTextCtrl *m_txt2 = nullptr;
	wxListBox *m_list2 = nullptr;





	void OnButtonClicked(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};