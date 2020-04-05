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
protected:
    virtual string ToString() = 0;
    virtual double ToDouble() = 0;
};
#endif //LABA1_ABSTRACTGREEK_H
