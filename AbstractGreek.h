//
// Created by lonep on 05.04.2020.
//

#ifndef LABA1_ABSTRACTGREEK_H
#define LABA1_ABSTRACTGREEK_H

#include <string>
using namespace  std;
class AbstractGreek{
public:
    string Number;
    virtual string ToString();
    virtual double ToDouble();
    int checkBiggerNumberAndGive(char a1, char a2);
    virtual int FromGreekToArab();
    virtual void operator= (string st);
    virtual void operator= (double st);
};
#endif //LABA1_ABSTRACTGREEK_H
