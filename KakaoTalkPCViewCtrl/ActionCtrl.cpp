#include "ActionCtrl.h"

CActionCtrl& CActionCtrl::GetInstance()
{
	static CActionCtrl* pActionInstance = nullptr;
	if (nullptr == pActionInstance)
		pActionInstance = new CActionCtrl();
	return *pActionInstance;
}

BOOL CActionCtrl::SendChat(WCHAR* lpRoomTitle, WCHAR* lpMsg)
{
	BOOL bResult = FALSE;
	HWND hWnd = FindChatHandle(lpRoomTitle);
	if (hWnd != NULL)
	{
		SendMessage(hWnd, WM_SETTEXT, NULL, (LPARAM)lpMsg);
		Sleep(100);
		// Send ENTER
		PostMessage(hWnd, WM_KEYDOWN, VK_RETURN, 0);
		PostMessage(hWnd, WM_KEYUP, VK_RETURN, 0);
	}

	return bResult;
}

HWND CActionCtrl::FindChatHandle(WCHAR* lpRoomTitle)
{
	HWND hWndRoom = FindWindowEx(NULL, 0, NULL, (LPCWSTR)lpRoomTitle);

	HWND hWnd1 = FindWindowEx(hWndRoom, 0, L"RICHEDIT50W", 0);
	HWND hWnd2 = FindWindowEx(hWndRoom, 0, L"Edit", 0);
	HWND hWnd3 = FindWindowEx(hWndRoom, 0, L"EVA_VH_ListControl_Dblclk", 0);
	

	if (hWndRoom != NULL && hWnd1 != NULL && hWnd2 != NULL && hWnd3 != NULL)
	{
		return hWnd1;
	}

	return NULL;
}
