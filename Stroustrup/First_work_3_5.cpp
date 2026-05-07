#include <iostream>
#include <string>
using namespace std;

int main()
    {
        cout << "Пожалуйста, введите два имени.\n";
        string first;
        string second;
        cin >> first >> second;
        if (first == second) cout << "имена совпадают\n";
        if (first < second) 
            cout << first << " предшествуют " << second << " в алфавитном порядке" << "\n";
        if (first > second) 
            cout << first << " следует за " << second << " в алфавитном порядке" << "\n";
        return 0;
    }