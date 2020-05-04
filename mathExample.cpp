//
// Created by lonep on 01.05.2020.
//

#include "mathExample.h"
#include <iostream>
#include <cstdlib>
#include "GreekNumber.h"

using namespace std;

bool mathExample::checkVariable(string str) {
    if (str[0] != '1' && str[0] != '2' && str[0] != '3' && str[0] != '4' && str[0] != '5' && str[0] != '6' &&
        str[0] != '7' && str[0] != '8' && str[0] != '9' && str[0] != '0') {
        if (str[0] != 'I' || str[0] != 'V' || str[0] != 'X' || str[0] != 'L' || str[0] != 'C' || str[0] != 'M' ||
            str[0] != 'D') {
        if (variables.find(str) == variables.end()) {
            return 0;
        } else return 1;
    }
}
}
short  mathExample::checkType(string a, string b) {
    if (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' || a[0] == '0')
        if(b[0] == '1' || b[0] == '2' || b[0] == '3' || b[0] == '4' || b[0] == '5' || b[0] == '6' || b[0] == '7' || b[0] == '8' || b[0] == '9' || b[0] == '0')
            return 1;
    if (a[0] == 'I' || a[0] == 'V' || a[0] == 'X' || a[0] == 'L' || a[0] == 'C' || a[0] == 'M' || a[0] == 'D')
        if(b[0] == '1' || b[0] == '2' || b[0] == '3' || b[0] == '4' || b[0] == '5' || b[0] == '6' || b[0] == '7' || b[0] == '8' || b[0] == '9' || b[0] == '0')
            return 2;
    if (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' || a[0] == '0')
        if(b[0] == 'I' || b[0] == 'V' || b[0] == 'X' || b[0] == 'L' || b[0] == 'C' || b[0] == 'M' || b[0] == 'D')
            return 3;
    if(a[0] == 'I' || a[0] == 'V' || a[0] == 'X' || a[0] == 'L' || a[0] == 'C' || a[0] == 'M' || a[0] == 'D')
        if(b[0] == 'I' || b[0] == 'V' || b[0] == 'X' || b[0] == 'L' || b[0] == 'C' || b[0] == 'M' || b[0] == 'D')
            return 4;
    if (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != '4' || a[0] != '5' || a[0] != '6' || a[0] != '7' || a[0] != '8' || a[0] != '9' || a[0] != '0')
        if(a[0] != 'I' || a[0] != 'V' || a[0] != 'X' || a[0] != 'L' || a[0] != 'C' || a[0] != 'M' || a[0] != 'D')
            if(b[0] == '1' || b[0] == '2' || b[0] == '3' || b[0] == '4' || b[0] == '5' || b[0] == '6' || b[0] == '7' || b[0] == '8' || b[0] == '9' || b[0] == '0')
                return 1;
    if (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != '4' || a[0] != '5' || a[0] != '6' || a[0] != '7' || a[0] != '8' || a[0] != '9' || a[0] != '0')
        if(a[0] != 'I' || a[0] != 'V' || a[0] != 'X' || a[0] != 'L' || a[0] != 'C' || a[0] != 'M' || a[0] != 'D')
            if(b[0] == 'I' || b[0] == 'V' || b[0] == 'X' || b[0] == 'L' || b[0] == 'C' || b[0] == 'M' || b[0] == 'D')
                return 3;
}

void mathExample::GetEqual() {
    string a,b, operat;
    cin >> a;
    cin >> operat;
    cin >> b;
    results.open("results.txt", std::ios::app);
    int aInt, bInt;
    short ch = checkType(a,b);
    switch (ch) {
        case (1):
            if (checkVariable(a) == 0) {
                aInt = atoi(a.c_str());
                bInt = atoi(b.c_str());
            }
            else {
                bInt = atoi(b.c_str());
            }
            break;
        case (2): {
            if (checkVariable(a) == 0) {
                bInt = atoi(b.c_str());
                GreekNumber toInt;
                toInt.Number = a;
                aInt = toInt.FromGreekToArab();
            }
            else
                bInt = atoi(b.c_str());

        }
            break;
        case 3: {
            if (checkVariable(a) == 0) {
                aInt = atoi(a.c_str());
                GreekNumber toInt;
                toInt.Number = b;
                bInt = toInt.FromGreekToArab();
            }
            else{
                GreekNumber toInt;
                toInt.Number = b;
                bInt = toInt.FromGreekToArab();
            }
        }
            break;
        case 4: {
            if(checkVariable(a) == 0) {
                GreekNumber toIntA, toIntB;
                toIntA.Number = a;
                toIntB.Number = b;
                aInt = toIntA.FromGreekToArab();
                bInt = toIntB.FromGreekToArab();
            }
            else {
                GreekNumber toInt;
                toInt.Number = b;
                bInt = toInt.FromGreekToArab();
            }
            break;
        }
    }
    if (operat == "="){
        if(variables.find(a) != variables.end()){
            variables.erase(variables.find(a));
        }
        variables.insert(make_pair(a,bInt));
        results << "a = " <<  bInt << '\n';
    }
    if (operat == "+"){
        if(checkVariable(a) != 0 && checkVariable(b) == 0){
           cout << variables[a] + bInt << '\n';
            results << variables[a] << "+" <<  bInt <<"="<< variables[a] + bInt <<'\n';
        } else {
            if (checkVariable(a) != 0 && checkVariable(b) != 0){
                cout << variables[a] + variables[b] << '\n';
                results << variables[a] << "+" <<  variables[b] <<"="<< variables[a] + variables[b] <<'\n';
            }
            else {
                cout << aInt + bInt << '\n';
                results << a << "+" << b << "=" << aInt + bInt << '\n';
            }
        }
    }
    if (operat == "-"){
        if(checkVariable(a) != 0 && checkVariable(b) == 0){
            cout << variables[a] + bInt << '\n';
            results << variables[a] << "-" <<  bInt <<"="<< variables[a] - bInt <<'\n';
        } else {
            if (checkVariable(a) != 0 && checkVariable(b) != 0){
                cout << variables[a] - variables[b] << '\n';
                results << variables[a] << "+" <<  variables[b] <<"="<< variables[a] - variables[b] <<'\n';
            }
            else {
                cout << aInt + bInt << '\n';
                results << a << "-" << b << "=" << aInt - bInt << '\n';
            }
        }
    }
    if (operat == "*") {
        if(checkVariable(a) != 0 && checkVariable(b) == 0){
            cout << variables[a] * bInt << '\n';
            results << variables[a] << "*" <<  bInt <<"="<< variables[a] * bInt <<'\n';
        } else {
            if (checkVariable(a) != 0 && checkVariable(b) != 0){
                cout << variables[a] * variables[b] << '\n';
                results << variables[a] << "*" <<  variables[b] <<"="<< variables[a] * variables[b] <<'\n';
            }
            else {
                cout << aInt + bInt << '\n';
                results << a << "*" << b << "=" << aInt * bInt << '\n';
            }
        }
    }
results.close();
}

void mathExample::printInstruction() {
    cout << "Guide for using a calculator" << '\n';
    cout << "You can use +, -, * operators" << '\n';
    cout << "Also you can use '=' for create variable like a = 5" << '\n';
    cout << "Please always use space between numbers and operators" << '\n';
    cout << "Examples commands: 5 + 5, a = 5, b = 5, a + b, 5 * 5, a = II, II * III"<< '\n';
}


