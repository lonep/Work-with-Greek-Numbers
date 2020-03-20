#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
GreekNumber Gr, Gr1, Gr3;
Gr.Number = "VI";
Gr1.Number = "IV";
Gr3 = (Gr1 + Gr)  * Gr1;
cout << Gr3.Number;

}