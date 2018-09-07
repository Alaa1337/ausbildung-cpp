// GT_HelloWorldWin32.cpp
// compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <unistd.h>

// Global variables

// The main window class name.
static TCHAR szWindowClass[] = _T("win32app");

// The string that appears in the application's title bar.
static TCHAR szTitle[] = _T("Win32 Guided Tour Application");

HINSTANCE hInst;

// Forward declarations of functions included in this code module:
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int CALLBACK WinMain(
    _In_ HINSTANCE hInstance,
    _In_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nCmdShow)
{
    WNDCLASSEX wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));

    if (!RegisterClassEx(&wcex))
    {
        MessageBox(NULL,
                   _T("Call to RegisterClassEx failed!"),
                   _T("Win32 Guided Tour"),
                   NULL);

        return 1;
    }

    hInst = hInstance; // Store instance handle in our global variable

    // The parameters to CreateWindow explained:
    // szWindowClass: the name of the application
    // szTitle: the text that appears in the title bar
    // WS_OVERLAPPEDWINDOW: the type of window to create
    // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
    // 500, 100: initial size (width, length)
    // NULL: the parent of this window
    // NULL: this application does not have a menu bar
    // hInstance: the first parameter from WinMain
    // NULL: not used in this application
    HWND hWnd = CreateWindow(
        szWindowClass,
        szTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        1000, 500,
        NULL,
        NULL,
        hInstance,
        NULL);

    if (!hWnd)
    {
        MessageBox(NULL,
                   _T("Call to CreateWindow failed!"),
                   _T("Win32 Guided Tour"),
                   NULL);

        return 1;
    }

    // The parameters to ShowWindow explained:
    // hWnd: the value returned from CreateWindow
    // nCmdShow: the fourth parameter from WinMain
    ShowWindow(hWnd,
               nCmdShow);
    UpdateWindow(hWnd);

    // Main message loop:
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;
    RECT rect;
    HFONT hFont, hTmp;
    
    TCHAR greeting[] = _T("/");
    TCHAR greeting2[] = _T("/");
    TCHAR greeting3[] = _T("/");
    TCHAR greeting4[] = _T("/");
    TCHAR greeting5[] = _T("/");
    TCHAR greeting6[] = _T("\\");
    TCHAR greeting7[] = _T("/");
    TCHAR greeting8[] = _T("\\");
    TCHAR greeting9[] = _T("/");
    switch (message)
    {
    case WM_PAINT:
        //SetRect(&rect, 0,0,200,200);

        // DrawText(hdc, TEXT("Drawing Text with Impact"), -1,&rect, DT_NOCLIP);
        hdc = BeginPaint(hWnd, &ps);
SetBkMode( hdc, TRANSPARENT );
        SetTextColor(hdc, RGB(64, 128, 206));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, false, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                           CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
        TextOut(hdc, 100, 217, greeting, _tcslen(greeting));


        SetTextColor(hdc, RGB(80, 175, 206));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                           CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
        TextOut(hdc, 54, 217, greeting2, _tcslen(greeting2));


        SetTextColor(hdc, RGB(181, 184, 188));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 155, 217, greeting3, _tcslen(greeting3));


        SetTextColor(hdc, RGB(255, 0, 0));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 149, 217, greeting4, _tcslen(greeting4));


        SetTextColor(hdc, RGB(148, 150, 153));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 203, 217, greeting5, _tcslen(greeting5));

               SetTextColor(hdc, RGB(148, 150, 153));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, true, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 253, 217, greeting6, _tcslen(greeting6));

               SetTextColor(hdc, RGB(148, 150, 153));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, false, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 303, 217, greeting7, _tcslen(greeting7));

                      SetTextColor(hdc, RGB(148, 150, 153));
        hFont = CreateFont(100, 0, 0, 0, FW_DONTCARE, false, false, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
                         CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY, VARIABLE_PITCH, TEXT("Webdings"));
        SelectObject(hdc, hFont);
       TextOut(hdc, 354, 217, greeting8, _tcslen(greeting8));





        EndPaint(hWnd, &ps);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
        break;
    }
    
    return 0;
}