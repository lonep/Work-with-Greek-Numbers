#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include "GreekDouble.h"
#include <String>
#include <cstdlib>
#include "MyStack.h"
using namespace std;

void FindAndAddSum(MyStack &stack){
    MyStack copy = stack;
    GreekNumber sum;
    for(int i = 0; i < copy.length() ; i++){
        sum = GreekNumber::Plus(sum, copy.pop());
    }
    stack.push(sum);
}

int main() {
    GreekNumber t1, t2, t3;
    t1.Number = "V";
    t2.Number = "VII";
    t3.Number = "X";
    MyStack stack;
    stack.push(t1);
    stack.push(t2);
    stack.push(t3);
    FindAndAddSum(stack);
    cout << stack.pop().Number;
}