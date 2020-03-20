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
    void operator+= (GreekNumber right);

    GreekNumber operator- (GreekNumber right);
    void operator-= (GreekNumber right);

    void operator= (GreekNumber right);

    GreekNumber operator* (GreekNumber right);
    void operator*= (GreekNumber right);

    GreekNumber operator++ ();

    istream& operator>> (istream in);
    ostream& operator<< (ostream &out);
private:
    int checkBiggerNumberAndGive(char a1, char a2);

};
#endif //LABA1_GREEKNUMBER_H
