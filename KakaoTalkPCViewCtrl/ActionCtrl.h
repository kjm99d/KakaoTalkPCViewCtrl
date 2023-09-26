#pragma once
#include <Windows.h>

class CActionCtrl
{
public:
	static CActionCtrl& GetInstance();

public:
	BOOL SendChat(WCHAR * lpRoomTitle, WCHAR* lpMsg);
	
private:
	HWND FindChatHandle(WCHAR* lpRoomTitle);
};

