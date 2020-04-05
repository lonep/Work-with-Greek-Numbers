#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
GreekNumber gr1;
gr1.Number = "VII";
cout << gr1.ToDouble() << '\n';
cout << gr1.ToString();
}