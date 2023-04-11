#include "QuickSort.h"
#include<vector>
#include<algorithm>
#include<iostream>


void quicksrt(std::vector<int>& list, int lo, int hi) {
    int left = lo, right = hi;
    
    int pivot = 0;
    if (right - left > 3) {
        pivot = list[left + 2];
    } else {
        pivot = list[(right + left) / 2];
    }
    
    while (left <= right) {
        while (list[left] < pivot) {
            left++;
        }
        while (list[right] > pivot) {
            right--;
        }
        if (left <= right) {
            std::swap(list[left], list[right]);
            left++;
            right--;
        }
    }
    
    if (lo < right) {
        quicksrt(list, lo, right);
    }
    if (left < hi) {
        quicksrt(list, left, hi);
    }

}

std::vector<int> QuickSort::sort(std::vector<int> list) {


    quicksrt(list,0,list.size()-1);
    
    return list;
}



QuickSort::QuickSort() {
    
}

