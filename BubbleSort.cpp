#include "BubbleSort.h"
#include<algorithm>


std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool hasSwapped = true;

    while (hasSwapped) {
        hasSwapped = false;
        for (int i = 1; i < list.size(); i++) {
            if (list[i-1] > list[i]) {
                std::swap(list[i], list[i-1]);
                hasSwapped = true;
            }
        }
    }

    return list;
        
}

BubbleSort::BubbleSort() {
    
}


