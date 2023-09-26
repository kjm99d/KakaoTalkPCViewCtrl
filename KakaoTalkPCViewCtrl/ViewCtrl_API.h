#pragma once

#ifdef KAKAOTALKPCVIEWCTRL_EXPORTS
#define KAKAOTALKPCVIEWCTRL_EXPORT _declspec(dllexport) 
#else
#define KAKAOTALKPCVIEWCTRL_EXPORT _declspec(dllimport) 
#endif


extern "C" {
	void KAKAOTALKPCVIEWCTRL_EXPORT KAKAO_SendMessage(wchar_t* lpWndTitle, wchar_t* lpMessage);
}