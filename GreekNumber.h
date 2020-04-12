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
    static string Plus(GreekNumber plus, GreekNumber plus1);
    static string Plus(GreekNumber plus, GreekDouble plus1);
    void operator= (string st);
    void operator= (double st);
};
#endif //LABA1_GREEKNUMBER_H
