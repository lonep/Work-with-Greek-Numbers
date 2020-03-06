//
// Created by lonep on 01.03.2020.
//
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <iostream>

/*

 UNICODE
 U+216x
 I - 0 - 73
 V - 4 - 86
 L - C - 76
 C - D - 67
 D - E - 68
 M - F - 77
 */

int GreekNumber::checkBiggerNumberAndGive(char a1, char a2){
    wchar_t *b = new wchar_t[2];
    b[0] = a1;
    b[1] = a2;
    short num[2];
    for (int i = 0; i < 2 ; i++){
        if (b[i] = L'\u216f')
            num[i] = 1000;
        if (b[i] = L'\u216e')
            num[i] = 500;
        if (b[i] = L'\u216d')
            num[i] = 100;
        if (b[i] = L'\u216c')
            num[i] = 50;
        if (b[i] = L'\u2169')
            num[i] = 10;
        if (b[i] = L'\u2164')
            num[i] = 5;
        if (b[i] = L'\u2160')
            num[i] = 1;
    }
    if (num[0] >= num[1])
        return num[0];
    else return  (num[0]*(-1));
}

int GreekNumber::FromGreekToArab(){
    short length;
    short j = 0;
    int ArabNumber = 0;
    while (Number[j] != 0){
        j++;
        length ++;
    }
    for(int i = 0; i < length; i++){
        ArabNumber += checkBiggerNumberAndGive(Number[i], Number[i+1]);
    }
    return ArabNumber;
}


wchar_t* GreekNumber::GreekPlus(GreekNumber plus1){
    ArabNumber ArabRes;
    ArabRes.Number = FromGreekToArab() + plus1.FromGreekToArab();
    return ArabRes.FromArabToGreek();

}

wchar_t* GreekNumber::GreekMinus(GreekNumber Minus){
    ArabNumber ArabRes;
    if (FromGreekToArab() > Minus.FromGreekToArab()) {
        ArabRes.Number = FromGreekToArab() - Minus.FromGreekToArab();
        return ArabRes.FromArabToGreek();
    } else {
        cout << "We can't use  minus numbers.";
    }
}

/*void GreekNumber::EnterGreekNumber(){
    cout << "Enter your Greek number:" << '\n';
    int test =0;
    cin >> test;
    if (typeid(test).name() == "string")
        Number = test;
    else
        cout << "This operation only work with Greek numbers";
}*/


