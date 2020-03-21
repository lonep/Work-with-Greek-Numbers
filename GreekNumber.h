//
// Created by lonep on 01.03.2020.
//

#ifndef LABA1_GREEKNUMBER_H
#define LABA1_GREEKNUMBER_H
#include <string>
using namespace std;
class GreekNumber {
public:
string Number;
    int FromGreekToArab();
    GreekNumber operator+ (GreekNumber right);
    string operator+ (string right); // Потом удалить, если не понадобится
    GreekNumber operator+= (GreekNumber right);

    GreekNumber operator- (GreekNumber right);
    GreekNumber operator-= (GreekNumber right);

    void operator= (GreekNumber right);

    GreekNumber operator* (GreekNumber right);
    GreekNumber operator*= (GreekNumber right);

    GreekNumber operator++ ();
    GreekNumber operator++ (int);

    friend istream& operator>> (istream& in, GreekNumber& right);
    friend ostream& operator<< (ostream& out, GreekNumber& right);
private:
    int checkBiggerNumberAndGive(char a1, char a2);

};
#endif //LABA1_GREEKNUMBER_H
