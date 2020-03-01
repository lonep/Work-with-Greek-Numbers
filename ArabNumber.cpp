//
// Created by lonep on 01.03.2020.
//

#include "ArabNumber.h"
using namespace std;
#include<string>

 string ArabNumber::FromArabToGreek() {
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

