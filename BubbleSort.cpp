#include "BubbleSort.h"
#include<algorithm>


std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool hasSwapped = true;

    while (hasSwapped) {
        hasSwapped = false;
        for (int i = 0; i < list.size()-1; i++) {
            if (list[i] < list[i+1]) {
                std::swap(list[i], list[i+1]);
                hasSwapped = true;
            }
        }
    }

    return list;
        
}

BubbleSort::BubbleSort() {
    
}


