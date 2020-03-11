#include <iostream>
#include "GreekNumber.h"
#include "io.h"
#include "ArabNumber.h"
#include <String>
#include <fcntl.h>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод

void PrintUnicode(wchar_t Text[10]){
    for(int i = 0; i<10; i++ )
        wcout << Text[i];
}

int main() {
 _setmode(_fileno(stdout), _O_U16TEXT);
ArabNumber Ar1;
ArabNumber Ar2;
Ar1.Number = 4;
Ar2.Number = 5;
wcout << Ar1.FromArabToGreek();
//PrintUnicode(Ar1.FromArabToGreek());

}