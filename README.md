# 💡KakaoTalkPCViewCtrl

`KakaoTalkPCViewCtrl` 프로젝트는 카카오톡 클라이언트를 관리하는 프로젝트입니다.

해당 프로젝트를 사용하여 발생하는 모든 책임은 사용자에게 있습니다.


## 📃Export Functions
- 카카오톡 메세지 보내기    
    - KAKAO_SendMessage(wchar_t* lpWndTitle, wchar_t* lpMessage)
        - lpWndTitle : 카카오톡 채팅방 이름
        - lpMessage : 전송할 메세지


## 📝Examples
- Python
    ```python
    import ctypes as c

    mydll = c.WinDLL('KakaoTalkPCViewCtrl64.dll')
    myfunc = mydll['KAKAO_SendMessage']
    myfunc.argtypes = (c.c_wchar_p, c.c_wchar_p)
    myfunc.restype = c.c_void_p
    res = myfunc("정민", "메시지 전송")
    ```

