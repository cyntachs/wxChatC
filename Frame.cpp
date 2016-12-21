///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Frame.h"

#include "box.xpm"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* Main_Sizer;
	Main_Sizer = new wxBoxSizer( wxVERTICAL );
	
	LoginPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 600,550 ), wxTAB_TRAVERSAL );
	wxBoxSizer* Panel_Sizer;
	Panel_Sizer = new wxBoxSizer( wxVERTICAL );
	
	LogoBitmap = new wxStaticBitmap( LoginPanel, wxID_ANY, wxBitmap( box_xpm ), wxDefaultPosition, wxDefaultSize, 0 );
	Panel_Sizer->Add( LogoBitmap, 1, wxEXPAND, 5 );
	
	wxGridSizer* LoginFormSizer;
	LoginFormSizer = new wxGridSizer( 5, 0, 0, 0 );
	
	UserInput = new wxTextCtrl( LoginPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	LoginFormSizer->Add( UserInput, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM, 5 );
	
	PasswInput = new wxTextCtrl( LoginPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	LoginFormSizer->Add( PasswInput, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 5 );
	
	Confirm_Button = new wxButton( LoginPanel, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	LoginFormSizer->Add( Confirm_Button, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	LoginStatus = new wxStaticText( LoginPanel, wxID_ANY, wxT("Please note that your Username and Password will expire in a few days."), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	LoginStatus->Wrap( -1 );
	LoginFormSizer->Add( LoginStatus, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	Panel_Sizer->Add( LoginFormSizer, 1, wxEXPAND, 5 );
	
	
	LoginPanel->SetSizer( Panel_Sizer );
	LoginPanel->Layout();
	Main_Sizer->Add( LoginPanel, 1, wxEXPAND, 5 );
	
	ChatPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 600,550 ), wxTAB_TRAVERSAL );
	ChatPanel->Hide();
	
	wxBoxSizer* Chat_Sizer;
	Chat_Sizer = new wxBoxSizer( wxVERTICAL );
	
	Rooms = new wxAuiNotebook( ChatPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE );
	
	Chat_Sizer->Add( Rooms, 1, wxEXPAND, 5 );
	
	
	ChatPanel->SetSizer( Chat_Sizer );
	ChatPanel->Layout();
	Main_Sizer->Add( ChatPanel, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( Main_Sizer );
	this->Layout();
	
	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}

ChatRoom::ChatRoom( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* ChatRoom_Sizer;
	ChatRoom_Sizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* Top_Sizer;
	Top_Sizer = new wxBoxSizer( wxHORIZONTAL );
	
	History = new wxRichTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxVSCROLL|wxHSCROLL|wxNO_BORDER|wxWANTS_CHARS );
	Top_Sizer->Add( History, 5, wxEXPAND|wxBOTTOM|wxRIGHT, 5 );
	
	Users = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	Top_Sizer->Add( Users, 1, wxEXPAND|wxBOTTOM, 5 );
	
	
	ChatRoom_Sizer->Add( Top_Sizer, 10, wxEXPAND, 5 );
	
	Input = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ChatRoom_Sizer->Add( Input, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( ChatRoom_Sizer );
	this->Layout();
}

ChatRoom::~ChatRoom()
{
}

ExtFrame::ExtFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( 250,550 ) );
	
	wxBoxSizer* ExtFrame_Sizer;
	ExtFrame_Sizer = new wxBoxSizer( wxVERTICAL );
	
	Contacts_List = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	ExtFrame_Sizer->Add( Contacts_List, 4, wxEXPAND, 5 );
	
	Opt_Panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_button2 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button2, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_button3 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button3, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_button4 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button4, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_button5 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button5, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_button6 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button6, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button7 = new wxButton( Opt_Panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( m_button7, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	Opt_Panel->SetSizer( gSizer3 );
	Opt_Panel->Layout();
	gSizer3->Fit( Opt_Panel );
	ExtFrame_Sizer->Add( Opt_Panel, 1, wxEXPAND|wxTOP, 5 );
	
	
	this->SetSizer( ExtFrame_Sizer );
	this->Layout();
	
	this->Centre( wxBOTH );
}

ExtFrame::~ExtFrame()
{
}
