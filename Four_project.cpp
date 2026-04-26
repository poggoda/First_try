#include <iostream>
#include <string>

using namespace std;

int main()
    {
        int x = 6;
        double y = 3.5;
        char v = x;
        string p = "Вот ето я программист!";
        
        std::cout << p << '\n';
        std::cout << "Результат: " << x * v << '\n';
        std::cout << "Результат: " << x / v << '\n';
        std::cout << "Результат: " << x * y + v << '\n';
        std::cout << "Результат: " << x / y << '\n';

        return 0;
    }