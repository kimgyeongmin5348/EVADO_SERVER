#pragma once

#define WIN32_LEAN_AND_MEAN // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.


#include <iostream>
#include <windows.h>
#include <winsock2.h>
#include <mswsock.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#include "Macro.h"
#include "Types.h"
#include "protocol.h"
#include <concurrent_priority_queue.h>
using namespace std;

enum IO_TYPE
{
	IO_ACCEPT,
	IO_RECV,
	IO_SEND,
	IO_GET_PLAYER_INFO,
	IO_ADD_PLAYER_INFO,
	IO_SAVE_PLAYER_INFO,
	IO_NPC_RANDOM_MOVE,
	IO_NPC_RESPAWN,
	IO_PLAYER_RESPAWN,
	IO_NPC_AGGRO_MOVE,
	IO_HEAL,
};

enum SOCKET_STATE
{
	ST_FREE,
	ST_ALLOC,
	ST_INGAME
};