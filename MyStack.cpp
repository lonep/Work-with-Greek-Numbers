//
#include "MyStack.h"
void MyStack::push(GreekNumber &d) {
    if (index == 0){
        element *q = new element;
        q->number = d;
        q->point = 0;
        top = q;
        index++;
    }
    if (index > 0){
        element *q = new element;
        q->number = d;
        q->point = top;
        top = q;
        index++;
    }
}

GreekNumber MyStack::pop() {
   element q = *top;
   delete top;
   top = q.point;
    return q.number;
    index--;
}

int MyStack::length(){
    return index;
}