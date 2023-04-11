#include"BubbleSort.h"
#include"QuickSort.h"
#include<iostream>
#include<vector>


int main(void) {

    BubbleSort b1;

    std::vector<int> v1 = {10,9,8,7,6,5,4,3,2,1};


    for (auto x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    
    v1 = b1.sort(v1);

    for (auto x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    
    

    return 0;
}