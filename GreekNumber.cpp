//
// Created by lonep on 01.03.2020.
//
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <iostream>
using namespace std;

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

GreekDouble GreekNumber::operator+ (GreekDouble plus) {
    double result;
   result = plus.ToDouble();
   result = plus.ToDouble() + FromGreekToArab();
}