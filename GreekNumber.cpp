//
// Created by lonep on 01.03.2020.
//
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <iostream>
#include <string>
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

void GreekNumber::operator=(double st) {
    int i = 0;
    string test = to_string(st);
    int k = test.find('.');
    string dou = GreekDouble::FromDoubleToGreek(st);
    if (k  == -1){
        this->Number = GreekDouble::FromDoubleToGreek(st);
    }
    else {
        while (i < k) {
            this->Number += dou[i];
            i++;
        }
    }
}

void GreekNumber::operator=(string st) {
    string INT;
    int k = st.find('.');
    if (k == -1){
        this->Number = st;
    } else {
        int i = 0;
        while (i < k) {
            INT += st[i];
            i++;
        }
        this->Number = INT;
    }
}

GreekNumber GreekNumber::Plus(GreekNumber plus1, GreekNumber plus2) {
    double res = plus1.FromGreekToArab() + plus2.FromGreekToArab();
    GreekNumber result;
    result.Number = GreekDouble::FromDoubleToGreek(res);
    return result;
}