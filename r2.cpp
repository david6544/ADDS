#include<iostream>

void printStar(int n) {
    
    if (n < 1) {
        std::cout << std:: endl;
        return;
    }

    std::cout << "*";

    printStar(n-1);
    return;
}
