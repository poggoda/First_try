#include <iostream>
#include <string>
using namespace std;
int main ()
    {
        cout << "Пожалуйста, введите свое имя и отчество\n" ;
        string first ;
        string second;
        cin >> first >> second ;
        cout << "Привет, " << first << ' ' << second << "\n"; 
        cout << "Введите свой возраст\n";
        double age;
        cin >> age;
        cout << first << ' ' << second << " тебе целых: " << age * 12 << " месяцев!\n";
    }