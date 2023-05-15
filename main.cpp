#include"Heap.h"

#include<iostream>

int main(void) {
    Heap<int> h1 ({2,3,2,5,4,6,7,8,9,2});

    h1.insert(3);
    h1.insert(1);



    for (auto x : h1.values) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    h1.remove(1);

    for (auto x : h1.values) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}  