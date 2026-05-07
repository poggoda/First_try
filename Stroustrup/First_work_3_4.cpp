#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
cout << "Пожалуйста , введите значение с nпаааJ:11ЩеЙ точкой : ";
int n;
double x;
cin >> n ;
cin >> x;
cout << "n = " << n
<< "\nn+l = " << n+1
<< "\nтри раза по n == " << 3*n
<< "\nдва раза по n == " << n+n
<< "\nn в квадрате = " << n*n
<< "\nполовина n = " << n/2.0
<< "\nвычесление остатка от деления n = " << n%2 << '\n';
double result = static_cast<double>(sqrt(n));
cout << "\nкорень квадратНЪIЙ из n == " << result << '\n' 
<< "корень из n ==" << sqrt(n)
<< "\nкорень из Х ==" << sqrt(x) << "\n";
return 0;
}

