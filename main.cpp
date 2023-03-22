#include<iostream>
#include<cmath>
#include"Bag.h"


int sum_of_squares(int n) {

    if (n == 1) {
        return 1;
    }

    int newpow = pow(n,2);


    return newpow + sum_of_squares(n-1);
}

void printStar(int n) {
    
    if (n < 1) {
        std::cout << std:: endl;
        return;
    }

    std::cout << "*";

    printStar(n-1);
    return;
}

int main(void) {

    int n = 4;

    Bag<int> bag1;

    std::cout << sum_of_squares(n) << std::endl;
    printStar(4);


    return 0;
}
