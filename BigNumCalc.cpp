#include "BigNumCalc.h"
#include<list>
#include<string>
#include<iostream>

BigNumCalc::BigNumCalc()
{
}

BigNumCalc::~BigNumCalc()
{
}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    
    int array[numString.size()];

    //creating array to pass into ll;
    for (size_t i = 0; i < numString.size(); i++) {
        array[i] = numString[i] - '0';
    }
    
    std::list<int> numList(array, array + sizeof(array) / sizeof(int));

    while (*numList.begin() == 0) {
        numList.pop_front();
    }

    return numList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    // swaps them if the second is bigger than the first
    if (num2.size() > num1.size()) {
        std::list<int> temp = num1;
        num1 = num2;
        num2 = temp;
    }
    std::size_t count = 0;
    bool next = false;
    for (auto ri2=num2.rbegin(), ri1 = num1.rbegin(); ri2!=num2.rend(); ri2++, ri1++) {
        //adds the two lists together

        if (next) {
            *ri1 += 1;
            next = false;
        }

        *ri1 += *ri2;


        //increment the next element by 1 and take 10 from the current
        count++;
        if (*ri1 > 9 && count != num1.size()) {
            *ri1 -= 10;
            next = true;
        }
    }
    //edge case for greater than 9 at the first element
    if (*num1.begin() > 9) {
        *num1.begin() -= 10;
        num1.push_front(1);
    }

    //removing leading zeros
    while(*num1.begin() == 0) {
        num1.pop_front();
    }
    
    return num1;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {

    
    while (num2.size() < num1.size()) {
        num2.push_front(0);
    }
    std::size_t count = 0;
    bool next = false;
    for (auto ri2 = num2.rbegin(), ri1 = num1.rbegin(); ri2 != num2.rend(); ri2++, ri1++) {
        //subtracts the two lists together

        if (next) {
            *ri1 -= 1;
            next = false;
        }
        *ri1 -= *ri2;

        if (*ri1 < 0 && count != num1.size()) {
            *ri1 += 10;
            next = true;
        }
    }

    while(*num1.begin() == 0 && num1.size() > 1) {
        num1.pop_front();
    }
    return num1;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
    // multibly by 2
    int carry = 0;
    std::size_t count = 0;
    for (auto ri = num1.rbegin(); ri != num1.rend(); ri++) {
        *ri *= num2.front();
        *ri += carry;
        count++;
        if (*ri > 9 && count < num1.size()) {
            carry = *ri / 10;
            *ri %= 10;
        }
    }
    if (*num1.begin() > 9) {
        carry = *num1.begin() / 10;
        *num1.begin() %= 10;
        num1.push_front(carry);
    }

     while (*num1.begin() == 0) {
        num1.pop_front();
    }

    return num1;
}
