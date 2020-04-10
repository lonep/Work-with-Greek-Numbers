#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include "GreekDouble.h"
#include <String>

using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
    GreekDouble Do;
   Do.Number = "XII.IV";
   cout << Do.ToDouble() << ' ' << Do.ToString();

}