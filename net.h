#ifndef NET_H_INCLUDED
#define NET_H_INCLUDED

#include <wx/socket.h>

// class to handle all network communication

// Login authentication
// client/server
// Auth token system
// commands handling
// secure message transfer
// multithreading

class ClientHandler
{
    //
};

class ServerHandler
{
    //
};

class Net
{
public:
    //
    Net();

    // server
    void StartServer();
    void AddClient();
    void RemoveClient();

    // client
    void ConnectToServer();
};

#endif // NET_H_INCLUDED
