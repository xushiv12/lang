#include<windows.h>
#include<iostream>
#include<fstream>
#include<cstdlib> 
#include<cstdio>
#include<string>
#define A LRESULT
#define B CALLBACK
#define C xushi(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp)
#define P1 DefWindowProc(hwnd,msg,wp,lp)
#define WS_IT WS_OVERLAPPEDWINDOW
#define WS_EDIT WS_CHILD|WS_VISIBLE|WS_BORDER
#define API WINAPI
#define n WinMain(HINSTANCE h,HINSTANCE,LPSTR aaa,int bbb)
#define W1 wc.lpfnWndProc
#define W2 wc.hInstance
#define W3 wc.lpszClassName
#define R RegisterClass(&wc)
WNDCLASS wc={};
/*
徐氏windows电脑软件网(www.wds.24782bus.xyz)
版权(c):徐氏windows电脑软件网[保留所有权利]
版本:1.0.0
*/
using namespace std;
void run(MSG msg){
	while(GetMessage(&msg,0,0,0)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

