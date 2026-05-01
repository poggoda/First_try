#include <iostream>
#include <string>

using namespace std;
// Игра с переменными
int main()
    {
        int x = 6;
        double y = 3.5;
        char v = x;
        string p = "Вот ето я программист!";
        
        cout << p << '\n';
        cout << "Результат: " << x * v << '\n';
        cout << "Результат: " << x / v << '\n';
        cout << "Результат: " << x * y + v << '\n';
        cout << "Результат: " << x / y << '\n';

        return 0;
    }