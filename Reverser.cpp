#include "Reverser.h"
#include<cmath>
#include<iostream>

Reverser::Reverser() {
}

int Reverser::reverseDigit(int digit) {
    if (digit < 0) return -1;

    if (digit == 0) return 0;

    int res = digit % 10;
    int numDigits = log10(digit);

    digit /= 10;

    return res * pow(10,numDigits) + reverseDigit(digit);
}

std::string Reverser::reverseString(std::string str) {
    if (str.empty()) return "";

    std::string res;
    res +=  str.back();
    str.pop_back();

    return res + reverseString(str);
}