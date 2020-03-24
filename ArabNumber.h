//
// Created by lonep on 01.03.2020.
//

#ifndef LABA1_ARABNUMBER_H
#define LABA1_ARABNUMBER_H
#include<string>
#include <stdlib.h>
using namespace std;
class ArabNumber{
public:
    int Number;
    string FromArabToGreek();
    friend istream& operator>> (istream& in, ArabNumber& right);
    friend ostream& operator<< (ostream& out, ArabNumber& right);
};
#endif //LABA1_ARABNUMBER_H
