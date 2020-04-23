//
// Created by lonep on 07.04.2020.
//
#include "AbstractGreek.h"

int AbstractGreek:: checkBiggerNumberAndGive(char a1, char a2) {
    char b[2];
    b[0] = a1;
    b[1] = a2;
    short num[2];
    for (int i = 0; i < 2 ; i++){
        if (b[i] == (char) 77)
            num[i] = 1000;
        if (b[i] == (char) 68)
            num[i] = 500;
        if (b[i] == (char) 67)
            num[i] = 100;
        if (b[i] == (char) 76)
            num[i] = 50;
        if (b[i] == (char) 88 )
            num[i] = 10;
        if (b[i] == (char) 86)
            num[i] = 5;
        if (b[i] == (char) 73)
            num[i] = 1;
    }
    if (num[0] >= num[1])
        return num[0];
    else return  (num[0]*(-1));
}
void AbstractGreek::operator=(double st) {

}
 void AbstractGreek::operator=(string st) {

}

double AbstractGreek::ToDouble() {

}

string AbstractGreek::ToString() {

}

int AbstractGreek::FromGreekToArab() {

}
