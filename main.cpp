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
    Gr1.Number = "V";
    Do2.Number = "V.I";
    Gr3.Number = "IV";
    Do4.Number = "X.I";


    array[0] = &Do;
    array[1] = &Gr1;
    array[2] = &Do2;
    array[3] = &Gr3;
    array[4] = &Do4;
    for (int i = 0; i < 5; i++) {
        cout << array[i]->ToDouble() << " " ;
    }
    cout << "- ToDouble" << '\n';

    for (int i = 0; i < 5; i++){
        cout << array[i]->ToString() << " ";
    }
    cout << "- ToString" << '\n';

    for (int i = 0; i < 5; i++){
        *array[i] = 4.4;
        cout << array[i]->ToString() << ' ';
    }
    cout << " = for double" << '\n';

    for (int i = 0; i < 5; i++){
        *array[i] = "V.I";
        cout << array[i]->ToString() << ' ';
    }
    cout << " = for string" << '\n';

}