#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
ArabNumber Num;
Num.Number = 19;
cout << Num.FromArabToGreek();
}