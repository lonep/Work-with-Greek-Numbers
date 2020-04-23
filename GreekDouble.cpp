//
// Created by lonep on 05.04.2020.
//

#include "GreekDouble.h"
#include <iostream>
#include <string>
#include "ArabNumber.h"
#include <cstdlib>
#include "GreekNumber.h"



int GreekDouble::FromGreekToArab(){
    int ArabNumber = 0;
    for(int i = 0; i < Number.length(); i++){
        ArabNumber += checkBiggerNumberAndGive(Number[i], Number[i+1]);
    }
    return ArabNumber;
}

double GreekDouble::FromGreekToArabDouble() {
    double ArabNumber = 0;
    double ArabNumberDoublePart = 0;
    int i = 0;
    int k = 0;
   while (Number[k] != '.')
       k++;
   for (i; i<k; i++){
       ArabNumber += checkBiggerNumberAndGive(Number[i], Number[i+1]);
   }
   if(ArabNumber < 0){
       ArabNumber *= -1;
   }
   i += 1;
    for (i; i<Number.length(); i++){
        ArabNumberDoublePart += checkBiggerNumberAndGive(Number[i], Number[i+1]);
    }

    if (ArabNumberDoublePart < 0) {
        ArabNumberDoublePart *= -1;
    }
    if (ArabNumberDoublePart < 10)
        ArabNumberDoublePart *= 0.1;
    if (ArabNumberDoublePart > 9 && ArabNumberDoublePart < 100)
        ArabNumberDoublePart *= 0.01;
    if (ArabNumberDoublePart > 99 && ArabNumberDoublePart < 1000 )
        ArabNumberDoublePart *= 0.001;
    if (ArabNumberDoublePart > 999 && ArabNumberDoublePart < 10000)
        ArabNumberDoublePart *= 0.0001;
    if (ArabNumberDoublePart > 9999 && ArabNumberDoublePart < 1000000)
        ArabNumberDoublePart *= 0.00001;
    double result = ArabNumber + ArabNumberDoublePart;
    return result;
}

string GreekDouble::ToString() {
    return Number;
}

double GreekDouble::ToDouble() {
    return FromGreekToArabDouble();
}

string GreekDouble::FromDoubleToGreek(double ArabNumeral){
    string k1,k2;
    k1 = '0';
    k2 = '0';
    int i = 0;
    if(ArabNumeral - static_cast<int>(ArabNumeral)==0){
        ArabNumber Ar;
        Ar.Number = ArabNumeral;
        return Ar.FromArabToGreek();
    } else {

        string s = to_string(ArabNumeral);
        while (s[i] != '.') {
            k1[i] = s[i];
            i++;
        }
        int r = 0;
        i++;

        try {
            if (s[i] == '0')
                throw std::logic_error("Greek number don't use zero");
        }
        catch (std::logic_error) {
            return "0";
        }
        {
            while (s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' ||
                   s[i] == '7' ||
                   s[i] == '8' || s[i] == '9') {
                k2[r] = s[i];
                i++;
                r++;
            }
        }
        ArabNumber ar1, ar2;
        ar1.Number = atoi(k1.c_str());
        ar2.Number = atoi(k2.c_str());

        string result = ar1.FromArabToGreek() + '.' + ar2.FromArabToGreek();
        return result;
    }
    }


void GreekDouble::operator=(string st) {
    this->Number = st;
}
void GreekDouble::operator=(double st) {
    this->Number = FromDoubleToGreek(st);
}

GreekDouble GreekDouble::Plus(GreekDouble plus1,GreekDouble plus2) {
    double res = plus1.ToDouble() + plus2.ToDouble();
    GreekDouble result;
    result.Number = FromDoubleToGreek(res);
    return  result;
}



istream& operator>> (istream& in, GreekDouble& right){

    string a;

    in >> a;

    if (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' ) {

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

ostream& operator<<(ostream& out, GreekDouble& right) {

    string a = right.Number;

    out << a;

    return out;

}