#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <cstdio>
#include <wx/setup.h>
#include <wx/app.h>
#include "Frame.h"

class AppFrame : public MainFrame
{
public:
    AppFrame() : MainFrame(NULL) {};
    void ShowLogin();
    void ShowChat();
    void AddRoom();
};

class App : public wxApp
{
public:
    bool OnInit() {
        AppFrame *f = new AppFrame();
        f->Show(true);

        // debug
        //
        f->ShowChat();
        f->AddRoom();

        return true;
    };
};

#endif // MAIN_H_INCLUDED
