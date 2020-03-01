//
// Created by lonep on 01.03.2020.
//

#include "ArabNumber.h"
using namespace std;
#include<string>

/*
 ASCII code
 M - 77
 D - 68
 C - 67
 L - 76
 X - 88
 V - 86
 I - 80
 */
 string ArabNumber::FromArabToGreek() {
        short No = 0;
        string GreekNumber;
        if (Number / 1000 > 0) {
            int N1000 = Number / 1000;
            for (int i = 0; i < N1000; i++){
                GreekNumber += (char) 77;
                Number -= 1000;
                No += 1;
            }
        }
        if (Number / 500 > 0) {
            int N500 = Number / 500;
            for (int i = 0; i < N500; i++) {
                GreekNumber += (char) 68;
                Number -= 500;
                No += 1;
            }
        }
        if (Number / 100 > 0) {
            int N100 = Number / 100;
            if (Number / 100 == 4) {
                if (GreekNumber[No-1] == (char) 68) {
                    GreekNumber[No-1] = (char) 67;
                    GreekNumber += (char) 77;
                    No += 1;
                    Number -= 400;
                }
                else {
                    GreekNumber += (char) 67;
                    GreekNumber += (char) 68;
                    Number -= 400;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N100; i++) {
                    GreekNumber += (char) 67;
                    Number -= 100;
                    No += 1;
                }
            }
        }

        if (Number / 50 > 0) {
            int N50 = Number / 50;
            for (int i = 0; i < N50; i++) {
                GreekNumber += (char) 76;
                Number -= 50;
                No += 1;
            }
        }

        if (Number / 10 > 0) {
            int N10 = Number / 10;
            if (Number / 10 == 4) {
                if (GreekNumber[No-1] == (char) 76) {
                    GreekNumber[No-1] = (char) 88;
                    GreekNumber += (char) 67;
                    No += 1;
                    Number -= 40;
                }
                else {
                    GreekNumber += (char) 88;
                    GreekNumber += (char) 76;
                    Number -= 40;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N10; i++) {
                    GreekNumber += (char) 88;
                    Number -= 10;
                    No += 1;
                }
            }
        }
        if (Number / 5 > 0) {
            int N5 = Number / 5;
            for (int i = 0; i < N5; i++) {
                GreekNumber += (char) 86;
                Number -= 5;
                No += 1;
            }
        }
        if (Number / 1 > 0) {
            int N1 = Number / 1;
            if (Number / 1 == 4) {
                if (GreekNumber[No-1] == (char) 86) {
                    GreekNumber[No-1] = (char) 73;
                    GreekNumber += (char) 88;
                    No += 1;
                    Number -= 4;
                }
                else {
                    GreekNumber += (char) 88;
                    GreekNumber += (char) 86;
                    Number -= 4;
                    No += 2;
                }
            }
            else{
                for (int i = 0; i < N1; i++) {
                    GreekNumber += (char) 73;
                    Number -= 1;
                    No += 1;

                }
            }
        }
        return GreekNumber;
    }

