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
    int k = GreekDouble::FromDoubleToGreek(st).find('.');
    string dou = GreekDouble::FromDoubleToGreek(st);
    if (k  == -1){
        this->Number = GreekDouble::FromDoubleToGreek(st);
    }
    else {
        this->Number.erase(0, test.length());
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
GreekDouble GreekNumber::Plus(GreekNumber plus1, GreekDouble plus2) {
    double res = plus1.FromGreekToArab() + plus2.ToDouble();
    GreekDouble result;
    result.Number = GreekDouble::FromDoubleToGreek(res);
    return result;
}

istream& operator>> (istream& in, GreekNumber& right){
    string a;
    in >> a;
    if (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' || a[0] == '0') {
        ArabNumber ArabRes;
        ArabRes.Number = atoi(a.c_str());
        right.Number = ArabRes.FromArabToGreek();
    }
    else if (a[0] ==  'I' || a[0] == 'V' || a[0] == 'X' || a[0] == 'L' || a[0] == 'C' || a[0] == 'D' || a[0] == 'M') {
        right.Number = a;

    }
    else
        cout << "You tried to input wrong data";
    return in;

}

ostream& operator<<(ostream& out, GreekNumber& right) {

    string a = right.Number;

    out << a;

    return out;
}
GreekDouble GreekNumber::Plus(GreekDouble plus1,GreekDouble plus2) {
    double res = plus1.ToDouble() + plus2.ToDouble();
    GreekDouble result;
    result.Number = GreekDouble::FromDoubleToGreek(res);
    return  result;
}
GreekDouble GreekNumber::Plus(GreekDouble plus1, GreekNumber plus2) {
    double res = plus1.ToDouble() + plus2.ToDouble();
    GreekDouble result;
    result.Number = GreekDouble::FromDoubleToGreek(res);
    return  result;
}

AbstractGreek GreekNumber::Plus(AbstractGreek plus1, AbstractGreek plus2) {
    if (plus1.Number.find('.') == -1 && plus2.Number.find('.') == -1){
        GreekNumber Num1, Num2;
        Num1.Number = plus1.Number;
        Num2.Number = plus2.Number;
        plus1.Number = GreekNumber::Plus(Num1,Num2).Number;
        return plus1;
    }
    else if(plus1.Number.find('.') == -1 && plus2.Number.find('.') != -1){
        GreekNumber Num1;
        GreekDouble Num2;
        Num1.Number = plus1.Number;
        Num2.Number = plus2.Number;
        plus1.Number = GreekNumber::Plus(Num1,Num2).Number;
        return plus1;
    }
    else if(plus1.Number.find('.') != -1 && plus2.Number.find('.') != -1){
        GreekDouble Num1, Num2;
        Num1.Number = plus1.Number;
        Num2.Number = plus2.Number;
        plus1.Number = GreekNumber::Plus(Num1,Num2).Number;
        return plus1;
    }
    else if(plus1.Number.find('.') != -1 && plus2.Number.find('.') == -1){
        GreekDouble Num1;
        GreekNumber Num2;
        Num1.Number = plus1.Number;
        Num2.Number = plus2.Number;
        plus1.Number = GreekNumber::Plus(Num1,Num2).Number;
        return plus1;
    }
}
