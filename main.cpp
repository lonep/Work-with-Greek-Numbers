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
Gr1.Number[0] = L'\u216f';
Gr1.Number[1] = L'\u2160';
int k = Gr1.FromGreekToArab();


}