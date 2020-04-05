//
// Created by lonep on 01.03.2020.
//
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <iostream>
using namespace std;
int GreekNumber::checkBiggerNumberAndGive(char a1, char a2){
    char b[2];
    b[0] = a1;
    b[1] = a2;
    short num[2];
    for (int i = 0; i < 2 ; i++){
        if (b[i] == (char) 77)
            num[i] = 1000;
        if (b[i] == (char) 68)
            num[i] = 500;
        if (b[i] == (char) 67)
            num[i] = 100;
        if (b[i] == (char) 76)
            num[i] = 50;
        if (b[i] == (char) 88 )
            num[i] = 10;
        if (b[i] == (char) 86)
            num[i] = 5;
        if (b[i] == (char) 73)
            num[i] = 1;
    }
    if (num[0] >= num[1])
        return num[0];
    else return  (num[0]*(-1));
}

int GreekNumber::FromGreekToArab(){
    int ArabNumber = 0;
    for(int i = 0; i < Number.length(); i++){
        ArabNumber += checkBiggerNumberAndGive(Number[i], Number[i+1]);
    }
    return ArabNumber;
}

GreekNumber GreekNumber::operator+(GreekNumber plus) {
    GreekNumber res;
    res.Number = this->FromGreekToArab() + plus.FromGreekToArab();
    return res;
}

string GreekNumber::ToString() {
    return Number;
}
double GreekNumber::ToDouble() {
    return this->FromGreekToArab();
}
