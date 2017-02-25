
#include "main.h"

void AppFrame::ShowLogin()
{
    ChatPanel->Show(true);
    LoginPanel->Show(true);
};

void AppFrame::ShowChat()
{
    LoginPanel->Show(false);
    ChatPanel->Show(true);
};

void AppFrame::AddRoom()
{
    // Add new room
    CRoom * newroom = new CRoom(Rooms);
    Rooms->AddPage(newroom,_("room1"));
};

wxIMPLEMENT_APP(App);
