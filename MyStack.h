//
// Created by lonep on 20.04.2020.
//

#ifndef LABA1_MYSTACK_H
#define LABA1_MYSTACK_H
#include "GreekNumber.h"
class MyStack{
private:
    struct element {
        GreekNumber number;
        element *point;
    };
    element *top = 0;
    int index = 0;
    element *lasttop = 0;
public:
    void push(GreekNumber &d);
    GreekNumber pop();
    int length();
};
#endif //LABA1_MYSTACK_H
