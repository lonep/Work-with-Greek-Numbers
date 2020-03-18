//
// Created by lonep on 01.03.2020.
//

#ifndef LABA1_GREEKNUMBER_H
#define LABA1_GREEKNUMBER_H
#include <string>
using namespace std;
class GreekNumber {
public:
string Number;
    int FromGreekToArab();
    static string GreekPlus(GreekNumber plus1, GreekNumber plus2);
    static string GreekPlus(string plus1, string plus2);

    static string GreekMinus(GreekNumber Minus1, GreekNumber Minus2);
    static string GreekMinus(string Minus1, string Minus2);

    string operator+ (GreekNumber right);
    void EnterGreekNumber();

private:
    int checkBiggerNumberAndGive(char a1, char a2);

};
#endif //LABA1_GREEKNUMBER_H
