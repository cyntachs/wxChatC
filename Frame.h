///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __FRAME_H__
#define __FRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/aui/auibook.h>
#include <wx/frame.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxPanel* LoginPanel;
		wxStaticBitmap* LogoBitmap;
		wxTextCtrl* UserInput;
		wxTextCtrl* PasswInput;
		wxButton* Confirm_Button;
		wxStaticText* LoginStatus;
		wxPanel* ChatPanel;
		wxAuiNotebook* Rooms;
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ChatC"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,550 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ChatRoom
///////////////////////////////////////////////////////////////////////////////
class ChatRoom : public wxPanel 
{
	private:
	
	protected:
		wxRichTextCtrl* History;
		wxTextCtrl* Users;
		wxTextCtrl* Input;
	
	public:
		
		ChatRoom( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,550 ), long style = wxTAB_TRAVERSAL ); 
		~ChatRoom();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ExtFrame
///////////////////////////////////////////////////////////////////////////////
class ExtFrame : public wxFrame 
{
	private:
	
	protected:
		wxListBox* Contacts_List;
		wxPanel* Opt_Panel;
		wxButton* m_button2;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* m_button7;
	
	public:
		
		ExtFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ChatC"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 250,550 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );
		
		~ExtFrame();
	
};

#endif //__FRAME_H__
