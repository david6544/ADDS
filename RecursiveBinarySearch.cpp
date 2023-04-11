#include "RecursiveBinarySearch.h"
bool helperBinary(std::vector<int> list, int val, int left,  int right) {
    if (left > right) return false;
    
    int mid =(left + right) / 2;
    if (val == list[mid]) return true;
    else if (val > list[mid]) {
        return helperBinary(list, val, mid + 1, right);
    } else {
        return helperBinary(list, val, left, mid - 1);
    }
}


bool RecursiveBinarySearch::search(std::vector<int> list, int val) {
    return helperBinary(list, val, 0, list.size()-1);
}

RecursiveBinarySearch::RecursiveBinarySearch() {
    
}


