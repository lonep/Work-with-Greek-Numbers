#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include "GreekDouble.h"
#include <String>
#include <cstdlib>

using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

int main() {
            AbstractGreek *array[5];
            GreekDouble Do, Do2, Do4;
            GreekNumber Gr1, Gr3;
            Do.Number = "V.V";
            Do2.Number = "V.I";
            Do4.Number = "X.I";
            Gr1.Number = "V";
            Gr3.Number = "IV";
            array[0] = &Do;
            array[1] = &Gr1;
            array[2] = &Do2;
            array[3] = &Gr3;
            array[4] = &Do4;
            for(int i = 0; i < 5; i++){
              cout << Plus(*array[i], *array[i+1]) << '\n';
            }
}