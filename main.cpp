#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
GreekNumber Gr1;
GreekNumber Gr2;
Gr1.Number = "XI";
Gr2.Number = "I";
cout << Gr1.GreekMinus(Gr2);
}