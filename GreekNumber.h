//
// Created by lonep on 01.03.2020.
//

#ifndef LABA1_GREEKNUMBER_H
#define LABA1_GREEKNUMBER_H
#include <string>
#include "AbstractGreek.h"
#include "GreekDouble.h"
using namespace std;
class GreekNumber: public AbstractGreek {
public:
    string ToString() override;
    double ToDouble() override;
    int FromGreekToArab() override;
    void operator= (string st);
    void operator= (double st);
    static GreekNumber Plus(GreekNumber plus1, GreekNumber plus2);
    static GreekDouble Plus(GreekNumber plus1, GreekDouble plus2);
    static GreekDouble Plus(GreekDouble plus1, GreekDouble plus2);
    static GreekDouble Plus(GreekDouble plus1, GreekNumber plus2);
    static AbstractGreek Plus(AbstractGreek plus1, AbstractGreek plus2);
    friend istream& operator>> (istream& in, GreekNumber& right);
    friend ostream& operator<< (ostream& out, GreekNumber& right);
};
#endif //LABA1_GREEKNUMBER_H
