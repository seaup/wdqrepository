#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    POINT p;
    while(1){
        GetCursorPos(&p);//��ȡ�������
        SetCursorPos(p.x+3,p.y);//�����������
        Sleep(10);//�����ƶ�ʱ����
    }

    return 0;
}
