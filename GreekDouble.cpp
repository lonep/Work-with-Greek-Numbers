//
// Created by lonep on 05.04.2020.
//

#include "GreekDouble.h"
#include <iostream>
#include <string>


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
    //string result = static_cast<int>(ArabNumeral) + (ArabNumeral); // Сделать ветвление через if до трех тысяч.
}