#include <iostream>

using namespace std;
// Тесты че могу
int main ()
{
    int age;
    string name;

    std::cout << "Пожалуйста, представтесь." << '\n';
    std::cin >> name;
    std::cout << "Здраствуйте, " << name << "!" << '\n';
    std::cout << "Пожалуйста, введите Ваш возраст." << '\n';
    std::cin >> age; 
    std::cout << "Какой большой мальчик " << name << ", тебе целых " << age << " лет!" << '\n';
    std::cout << "Рады приветствовать тебя на нашем сервере!" << '\n';
    

    return 0; 
} 
