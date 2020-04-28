//
#include "MyStack.h"
#include <String>
void MyStack::push(AbstractGreek &d) {
    if (index == 0){
        element *q = new element;
        q->number = &d;
        q->point = 0;
        top = q;
        index++;
    }
    else if (index > 0){
        element *q = new element;
        q->number = &d;
        q->point = top;
        top = q;
        index++;
    }
}

AbstractGreek& MyStack::pop() {
   element p = *top;
   delete top;
   top = p.point;
    index--;
    return *p.number;
}

int MyStack::length(){
    return index;
}
