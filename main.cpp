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


    //std::cout << bag1.bagOfStuff.size() << std::endl;
/* 
    for (int i = 0; i < 10; i++) {
        bag1.addItem(i);
    }
    bag1.removeItem(); 
    for (int i = 0; i < 9; i++) {
        std::cout << bag1.bagOfStuff[i] << " ";
    }
    std::cout << std::endl;
 */

    std::cout << sum_of_squares(n) << std::endl;
    printStar(4);


    return 0;
}
