#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Введіть значення змінної a: ";
    cin >> a;
    cout << "Введіть значення змінної b: ";
    cin >> b;
    cout << "Введіть значення змінної c: ";
    cin >> c;

    int* ptr_a = &a;
    int* ptr_b = &b;
    int* ptr_c = &c;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    temp = *ptr_a;
    *ptr_a = *ptr_c;
    *ptr_c = temp;

    cout << "Результат обміну:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
