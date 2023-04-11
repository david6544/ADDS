#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
#include<iostream>
#include<vector>


int main(void) {

    BubbleSort b1;
    QuickSort q1;
    RecursiveBinarySearch bs1;


    std::vector<int> v1;

    int n;
    std::cin >> n;


    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        v1.push_back(temp);
    }

    
    v1 = q1.sort(v1);

    
    std::cout << std::boolalpha;
    std::cout << bs1.search(v1,1) << " ";
    

    for (auto x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    
    

    return 0;
}