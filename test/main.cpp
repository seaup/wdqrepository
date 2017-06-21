#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    POINT p;
    while(1){
        GetCursorPos(&p);//获取鼠标坐标
        SetCursorPos(p.x+3,p.y);//更改鼠标坐标
        Sleep(10);//控制移动时间间隔
    }

    return 0;
}
