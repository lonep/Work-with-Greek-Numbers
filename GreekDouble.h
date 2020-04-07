//
// Created by lonep on 05.04.2020.
//

#ifndef LABA1_GREEKDOUBLE_H
#define LABA1_GREEKDOUBLE_H

#include "AbstractGreek.h"

class GreekDouble: public AbstractGreek {
public:
    string ToString() override;
    double ToDouble() override;

private:
    double FromGreekToArab();
};


#endif //LABA1_GREEKDOUBLE_H
