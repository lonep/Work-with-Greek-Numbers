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
    if (ArabNumber < 0)
        ArabNumber*=-1;
    return ArabNumber;
}
string GreekNumber::ToString() {
    return Number;
}
double GreekNumber::ToDouble() {
    return this->FromGreekToArab();
}

string GreekNumber::Plus(GreekNumber plus, GreekNumber plus1) {
    double dou = plus.ToDouble() + plus1.ToDouble();
    return  GreekDouble::FromDoubleToGreek(dou);
}

string GreekNumber::Plus(GreekNumber plus, GreekDouble plus1) {
    double dou = plus.ToDouble() + plus1.ToDouble();
    return GreekDouble::FromDoubleToGreek(dou);
}

void GreekNumber::operator=(double st) {
    this->Number = GreekDouble::FromDoubleToGreek(st);
}

void GreekNumber::operator=(string st) {
    this->Number = st;
}