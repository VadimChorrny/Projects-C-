#include <iostream>
#include <windows.h>
using namespace std;

//������� 5 �������:
//1)� ��������� ��������� �����������
//2)������� ��� ���������
//3)³�������
//4)ĳ�����(���� ����� ����� 0 �� ����������� ��� ����� ����)
//5)��������

void title() {
    system("color 1"); cout << "�����������\t";
    Sleep(300);
    system("color A"); cout << "by Chorrny Edition" << endl;
    Sleep(300);
}

int Function1(int a, int b) {
    return a + b;
}
int Function2(int a, int b) {
    return a - b;
}
int Function3(int a, int b) {
    return a * b;
}
int Function4(int a, int b) {
    return a / b;
}
int main()
{
    setlocale(LC_ALL, "");

    int res, a, b;
    int choise = 0;
    title();
    system("color 5"); cout << "�����i�� �i�:\n\t ||1 - ��������� ||\n\t ||2 - �i��i�����||\n\t ||3 - ��������  ||\n\t ||4 - �i�����   ||" << endl;
    system("color 3"); cout << "-->";
    cin >> choise;
    system("color 3"); cout << "����� ����� -->";
    cin >> a;
    system("color 3"); cout << "����� ����� -->";
    cin >> b;
    if (choise == 1) {
        res = Function1(a, b);
    }
    else if (choise == 2) {
        res = Function2(a, b);
    }
    else if (choise == 3) {
        res = Function3(a, b);
    }
    else if (choise == 4) {
        res = Function4(a, b);
    }


    system("color E"); cout << "��������� --> " << res << endl;
    system("pause");
    return 0;

}