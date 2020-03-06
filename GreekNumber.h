//
// Created by lonep on 01.03.2020.
//

#ifndef LABA1_GREEKNUMBER_H
#define LABA1_GREEKNUMBER_H
#include <string>
using namespace std;
class GreekNumber {
public:
    wchar_t* Number = new wchar_t[10];
    int FromGreekToArab();
    wchar_t* GreekPlus(GreekNumber plus1);
    wchar_t*  GreekMinus(GreekNumber Minus);
    void EnterGreekNumber();

private:
    int checkBiggerNumberAndGive(char a1, char a2);
};
#endif //LABA1_GREEKNUMBER_H
