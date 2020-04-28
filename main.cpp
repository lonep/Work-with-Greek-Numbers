#include <iostream>
#include "GreekNumber.h"
//#include "ArabNumber.h"
#include "GreekDouble.h"
#include <String>
#include "MyStack.h"


void FindSumAndAdd(MyStack &stack){
    MyStack copy = stack;
    AbstractGreek sum;
    sum = copy.pop();
    int l = copy.length();
    for(int i = 0; i < l; i++){
        sum = GreekNumber::Plus(sum, copy.pop());
    }
    GreekDouble gr;
    gr.Number += sum.Number;
    stack.push(gr);
}

int main() {
  MyStack stack1, stack2;
  GreekNumber g1, g2, g3;
  GreekDouble Do1, Do2, Do3;
  g1.Number = "V";
  g2.Number = "X";
  g3.Number = "I";
  Do1.Number = "X.V";
  Do2.Number = "V.V";
  Do3.Number = "VI.I";
  stack1.push(g2);
  stack1.push(Do2);
  stack1.push(g3);
  FindSumAndAdd(stack1);
  string result = stack1.pop().Number;
  std::cout << result << '\n';

  //stack2.push(g3);
  stack2.push(Do2);
  //stack2.push(g2);
  FindSumAndAdd(stack2);
  std::cout << stack2.pop().Number;
}