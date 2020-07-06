#include <iostream>
#include <windows.h>
using namespace std;

//Зробити 5 функцій:
//1)З виведення заголовка КАЛЬКУЛЯТОР
//2)Функція для додавання
//3)Віднімання
//4)Ділення(Якщо друге число 0 то повертається теж число нуль)
//5)Множення

void title() {
    system("color 1"); cout << "КАЛЬКУЛЯТОР\t";
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
    system("color 5"); cout << "Виберiть дiю:\n\t ||1 - Додавання ||\n\t ||2 - Вiднiмання||\n\t ||3 - Множення  ||\n\t ||4 - Дiлення   ||" << endl;
    system("color 3"); cout << "-->";
    cin >> choise;
    system("color 3"); cout << "Перша цифра -->";
    cin >> a;
    system("color 3"); cout << "Друга цифра -->";
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


    system("color E"); cout << "РЕЗУЛЬТАТ --> " << res << endl;
    system("pause");
    return 0;

}