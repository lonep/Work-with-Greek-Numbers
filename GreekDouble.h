//
// Created by lonep on 05.04.2020.
//

#ifndef LABA1_GREEKDOUBLE_H
#define LABA1_GREEKDOUBLE_H

#include "AbstractGreek.h"
#include "GreekDouble.h"

class GreekDouble: public AbstractGreek {
public:
    string ToString() override;
    double ToDouble() override;
    void operator= (string st) override;
    void operator= (double st) override;
    static string FromDoubleToGreek(double ArabNumeral);
    static GreekDouble Plus(GreekDouble plus1, GreekDouble plus2);
    friend istream& operator>> (istream& in, GreekDouble& right);
    friend ostream& operator<< (ostream& out, GreekDouble& right);
private:
    int FromGreekToArab() override;
    double FromGreekToArabDouble();
};


#endif //LABA1_GREEKDOUBLE_H
