//
// Created by lonep on 01.03.2020.
//
#include  "GreekNumber.h"
#include "ArabNumber.h"
#include <iostream>
#include <stdlib.h>

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



string GreekNumber::operator+(string right) {
    GreekNumber Res;
    Res.Number = right;
    ArabNumber ArabRes;
    ArabRes.Number = this->FromGreekToArab() + Res.FromGreekToArab();
    return ArabRes.FromArabToGreek();
}

GreekNumber GreekNumber::operator+(GreekNumber right) {
    ArabNumber ArabRes;
    ArabRes.Number = this->FromGreekToArab()+right.FromGreekToArab();
    right.Number = ArabRes.FromArabToGreek();
    return right;
}

GreekNumber GreekNumber::operator+=(GreekNumber right) {
    ArabNumber ArabRes;
    ArabRes.Number = this->FromGreekToArab() + right.FromGreekToArab();
    this->Number = ArabRes.FromArabToGreek();
    return *this;
}

GreekNumber GreekNumber::operator* (GreekNumber right) {
    ArabNumber ArabRes;
    ArabRes.Number = this->FromGreekToArab() * right.FromGreekToArab();
    right.Number = ArabRes.FromArabToGreek();
    return right;
}

GreekNumber GreekNumber::operator*=(GreekNumber right) {
    ArabNumber ArabRes;
    ArabRes.Number = this->FromGreekToArab() * right.FromGreekToArab();
    this->Number = ArabRes.FromArabToGreek();
    return *this;
}

GreekNumber GreekNumber::operator- (GreekNumber right){
    ArabNumber ArabRes;
    if (this->FromGreekToArab() > right.FromGreekToArab()) {
        ArabRes.Number = this->FromGreekToArab() - right.FromGreekToArab();
        right.Number = ArabRes.FromArabToGreek();
        return right;
    }
}

void GreekNumber::operator= (GreekNumber right){
    this->Number = right.Number;
}

void GreekNumber::operator= (int right){
    ArabNumber ArabRes;
    ArabRes.Number = right;
    this->Number=ArabRes.FromArabToGreek();
}

void GreekNumber::operator= (string right){
    this->Number = right;
}
GreekNumber GreekNumber::operator++ (){
    GreekNumber Gr1;
    Gr1.Number = "I";
    *this += Gr1;
    return  *this;
}

GreekNumber GreekNumber::operator++ (int){
    GreekNumber temp;
    temp.Number = this->Number;
    ++(*this);
    return temp;
}

istream& operator>> (istream& in, GreekNumber& right){
    string a;
    in >> a;
    if (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' || a[0] == '0') {
        ArabNumber ArabRes;
        ArabRes.Number = atoi(a.c_str());
        right.Number = ArabRes.FromArabToGreek();
    }
    else {
        right.Number = a;
    }
    return in;
}

ostream& operator<<(ostream& out, GreekNumber& right) {
    string a = right.Number;
    out << a;
    return out;
}










