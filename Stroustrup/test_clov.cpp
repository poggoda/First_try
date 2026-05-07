#include <iostream>
#include <string>
using namespace std;
int main ()
        {
        string previous = " ";
        string current;
        while (cin>>current) 
            {
                if (previous == current)
                    {
                    cout << "Повторяющееся спово : " << current << "\n" ;
                    }
                previous = current;
            }
        return 0;
        }