//
// Created by lonep on 01.05.2020.
//

#ifndef LABA1_MATHEXAMPLE_H
#define LABA1_MATHEXAMPLE_H

#include <list>
#include <String>
#include <map>
#include <fstream>
using namespace std;
class mathExample {
private:
    map <string, int> variables;
    bool checkVariable(string str);
    short checkType(string a, string b);
    ofstream results;
    void printHelp();
public:
    static void printInstruction();
    void GetEqual();
};


#endif //LABA1_MATHEXAMPLE_H
