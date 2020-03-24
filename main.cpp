#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
GreekNumber a1, b1, c1;
a1 = 8;
b1 = 2;
c1 = 1;

GreekNumber d1 = a1 += (b1 + 10) + ++c1;



cout << d1 << "\n";
int a,b,c;
    a = 8;
    b = 2;
    c = 1;
int d = a += (b + 10) + ++c;
cout << d;
/*GreekNumber k, b;
b = "IV";
cin >> k;
if (k > b)
    cout << k;*/
}