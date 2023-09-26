#include "ViewCtrl_API.h"
#include "ActionCtrl.h"

void KAKAOTALKPCVIEWCTRL_EXPORT KAKAO_SendMessage(wchar_t* lpWndTitle, wchar_t* lpMessage)
{
    CActionCtrl::GetInstance().SendChat(lpWndTitle, lpMessage);
}
