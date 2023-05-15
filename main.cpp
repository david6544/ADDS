#include"Heap.h"

#include<iostream>
#include<queue>
#include<vector>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> pQ;
    for (auto x : values) {
        pQ.push(x);
    }

    for (int i = 1; i < k; i++) {
        pQ.pop();
    }
    return pQ.top();
}

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


    std::cout << kth_largest({1,2,3,4,5,6,7,6,1,23,123,12,3}, 3) << std::endl;

    return 0;
}  