#include <iostream>
#include "GreekNumber.h"
#include "ArabNumber.h"
#include <String>


using namespace std;
// Составить метод для переволи из римских в арабские и наоборот
// Простейшие операции с римскими числами
//+5 - использовать юникод
/*class ArabNumber{
public:int Number;
public: string FromArabToGreek() {
    short No = 0;
        string GreekNumber;
        if (Number / 1000 > 0) {
            int N1000 = Number / 1000;
                for (int i = 0; i < N1000; i++){
                    GreekNumber += 'M';
                    Number -= 1000;
                    No += 1;
            }
        }
        if (Number / 500 > 0) {
            int N500 = Number / 500;
            for (int i = 0; i < N500; i++) {
                GreekNumber += 'D';
                Number -= 500;
                No += 1;
            }
        }
        if (Number / 100 > 0) {
            int N100 = Number / 100;
            if (Number / 100 == 4) {
                if (GreekNumber[No-1] == 'D') {
                    GreekNumber[No-1] = 'C';
                    GreekNumber += 'M';
                    No += 1;
                    Number -= 400;
                }
                else {
                    GreekNumber += 'C';
                    GreekNumber += 'D';
                    Number -= 400;
                    No += 2;
                }
            }
                else{
                    for (int i = 0; i < N100; i++) {
                        GreekNumber += 'C';
                        Number -= 100;
                        No += 1;
                    }
                }
            }

        if (Number / 50 > 0) {
            int N50 = Number / 50;
                for (int i = 0; i < N50; i++) {
                    GreekNumber += 'L';
                    Number -= 50;
                    No += 1;
                }
            }

        if (Number / 10 > 0) {
            int N10 = Number / 10;
            if (Number / 10 == 4) {
                if (GreekNumber[No-1] == 'L') {
                    GreekNumber[No-1] = 'X';
                    GreekNumber += 'C';
                    No += 1;
                    Number -= 40;
                }
                else {
                    GreekNumber += 'X';
                    GreekNumber += 'L';
                    Number -= 40;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N10; i++) {
                    GreekNumber += 'X';
                    Number -= 10;
                    No += 1;
                }
            }
        }
        if (Number / 5 > 0) {
            int N5 = Number / 5;
                for (int i = 0; i < N5; i++) {
                    GreekNumber += 'V';
                    Number -= 5;
                    No += 1;
                }
            }
        if (Number / 1 > 0) {
            int N1 = Number / 1;
            if (Number / 1 == 4) {
                if (GreekNumber[No-1] == 'V') {
                    GreekNumber[No-1] = 'I';
                    GreekNumber += 'X';
                    No += 1;
                    Number -= 4;
                }
                else {
                    GreekNumber += 'I';
                    GreekNumber += 'V';
                    Number -= 4;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N1; i++) {
                    GreekNumber += 'I';
                    Number -= 1;
                    No += 1;

                }
            }
        }
            return GreekNumber;
        }
};

class GreekNumber {
public:string Number;
private:
    int checkBiggerNumberAndGive(char a1, char a2){
        char b[2];
        b[0] = a1;
        b[1] = a2;
        short num[2];
        for (int i = 0; i < 2 ; i++){
            if (b[i] == 'M')
                num[i] = 1000;
            if (b[i] == 'D')
                num[i] = 500;
            if (b[i] == 'C')
                num[i] = 100;
            if (b[i] == 'L')
                num[i] = 50;
            if (b[i] == 'X')
                num[i] = 10;
            if (b[i] == 'V')
                num[i] = 5;
            if (b[i] == 'I')
                num[i] = 1;
        }
        if (num[0] >= num[1])
            return num[0];
        else return  (num[0]*(-1));
    }

public: int FromGreekToArab(){
        int ArabNumber = 0;

        for(int i = 0; i < Number.length(); i++){
                ArabNumber += checkBiggerNumberAndGive(Number[i], Number[i+1]);
        }
        //cout << ArabNumber;
        return ArabNumber;
    }

public:
    string GreekPlus(GreekNumber plus1){
        ArabNumber ArabRes;
        ArabRes.Number = FromGreekToArab() + plus1.FromGreekToArab();
        return ArabRes.FromArabToGreek();

    }

public:
    string GreekMinus(GreekNumber Minus){
        ArabNumber ArabRes;
        if (FromGreekToArab() > Minus.FromGreekToArab()) {
            ArabRes.Number = FromGreekToArab() - Minus.FromGreekToArab();
            return ArabRes.FromArabToGreek();
        } else {
            cout << "We can't use  minus numbers.";
        }
    }
};*/
int main() {
GreekNumber Gr1;
GreekNumber Gr2;
Gr1.Number = "XII";
Gr2.Number = "IV";
cout << Gr1.GreekMinus(Gr2);
}