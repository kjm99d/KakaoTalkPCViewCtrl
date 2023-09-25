#pragma once
#include <Windows.h>

class CActionCtrl
{
public:
	static CActionCtrl& GetInstance();

public:
	BOOL SendChat(WCHAR * lpRoomTitle, WCHAR* lpMsg);
	HWND FindChatHandle(WCHAR* lpRoomTitle);
};

