/*1.Дано одновимірний масив цілих чисел з парною кількістю елементів.
Користуючись вказівниками, поміняти місцями елементи
масиву з парними і непарними індексами(тобто ті елементи масиву, які стоять на парних місцях, поміняти з елементами, 
які стоять на непарних місцях).*/

#include <iostream>
#include <string>

using namespace std;

// create function for change seats number
void changeSeats(int* ptr, int* px) {  // init pointer 
    int tmp;
    tmp = *ptr;
    *ptr = *px;
    *px = tmp; 
}

void Swap(int m[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            changeSeats(&m[i], &m[i + 1]);
        }
    }
}

void Result() {
    int mass[6] = { 1 ,2, 3, 4, 5, 6 };
    Swap(mass, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << mass[i] << " ";
    }
}

int main() {
    Result();
    return 0;
}
