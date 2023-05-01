#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include<list>
#include<string>

class bigNumCalc
{
public:

    //defaults
    bigNumCalc();
    ~bigNumCalc();

    //customs
    std::list<int> buildBigNum(std::string numString); //creates a ll from the string
    std::list<int> add(std::list<int> num1, std::list<int> num2); // adds 2 nums
    std::list<int> sub(std::list<int> num1, std::list<int> num2); // subtracts 2 nums
    std::list<int> mul(std::list<int> num1, std::list<int> num2); // multiplies 2 nums


};


#endif // BIGNUMCALC_H
