//
// Created by lonep on 01.03.2020.
//

#include "ArabNumber.h"
#include<string>
#include <iostream>


/*

 UNICODE
 U+216x
 I - 0
 V - 4
 L - C
 C - D
 D - E
 M - F
 */
using namespace std;

wchar_t* ArabNumber::FromArabToGreek() {
        short No = 0;
        wchar_t *Text = new wchar_t[10];
        string GreekNumber;
        if (Number / 1000 > 0) {
            int N1000 = Number / 1000;
            for (int i = 0; i < N1000; i++){
                Text[No] = L'\u216f';
                Number -= 1000;
                No += 1;
            }
        }
        if (Number / 500 > 0) {
            int N500 = Number / 500;
            for (int i = 0; i < N500; i++) {
                Text[No] = L'\u216e';
                Number -= 500;
                No += 1;
            }
        }
        if (Number / 100 > 0) {
            int N100 = Number / 100;
            if (Number / 100 == 4) {
                if (Text[No-1] == L'\u216e') {
                    Text[No-1] = L'\u216d';
                    Text[No] = L'\u216f';
                    No += 1;
                    Number -= 400;
                }
                else {
                    Text[No] = L'\u216d';
                    Text[No] = L'\u216e';
                    Number -= 400;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N100; i++) {
                    Text[No] = L'\u216d';
                    Number -= 100;
                    No += 1;
                }
            }
        }

        if (Number / 50 > 0) {
            int N50 = Number / 50;
            for (int i = 0; i < N50; i++) {
                Text[No] = L'\u216c';
                Number -= 50;
                No += 1;
            }
        }

        if (Number / 10 > 0) {
            int N10 = Number / 10;
            if (Number / 10 == 4) {
                if (Text[No-1] == L'\u216c') {
                    Text[No-1] = L'\u2169';
                    Text[No] = L'\u216d';
                    No += 1;
                    Number -= 40;
                }
                else {
                    Text[No] = L'\u2169';
                    Text[No] = L'\u216c';
                    Number -= 40;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N10; i++) {
                    Text[No] = L'\u2169';
                    Number -= 10;
                    No += 1;
                }
            }
        }
        if (Number / 5 > 0) {
            int N5 = Number / 5;
            for (int i = 0; i < N5; i++) {
                Text[No] = L'\u2164';
                Number -= 5;
                No += 1;
            }
        }
        if (Number / 1 > 0) {
            int N1 = Number / 1;
            if (Number / 1 == 4) {
                if (Text[No-1] == L'\u2164') {
                    Text[No-1] = L'\u2160';
                    Text[No] = L'\u2164';
                    No += 1;
                    Number -= 4;
                }
                else {
                    Text[No] = L'\u2169';
                    Text[No] = L'\u2164';
                    Number -= 4;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N1; i++) {
                    Text[No] = L'\u2160';
                    Number -= 1;
                    No += 1;

                }
            }
        }
    return Text;
    }

void ArabNumber::EnterArabNumber() {
     cout << "Enter your Arab number:" << '\n' ;
    int test =0;
    cin >> Number; //Пофиксить обратно, чтобы тип нужный был
    //if (typeid(test).name() == "integer")
        //Number = test;
    //else
      //  cout << "This operation only work with Arab numbers";
 }

