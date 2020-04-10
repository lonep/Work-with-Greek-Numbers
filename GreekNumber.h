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
    int FromGreekToArab();
    string ToString() override;
    double ToDouble() override;
    GreekNumber operator+ (GreekNumber plus);
    GreekDouble operator+ (GreekDouble plus);
private:

};
#endif //LABA1_GREEKNUMBER_H
