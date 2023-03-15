#include "EfficientTruckloads.h"
#include<algorithm>

EfficientTruckloads::EfficientTruckloads() {

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
   if(memo[numCrates] > 0) {
        return memo[numCrates];
   }
   int res = 0;

    // base case
    if (numCrates <= loadSize) {
        memo[numCrates] = 1;
        return 1;
    }


    //if odd do this
    if (numCrates % 2 == 1) {
        int left = numTrucks(numCrates/2,loadSize);
        memo[numCrates/2] = left;
        int right = numTrucks(numCrates/2+1,loadSize);
        memo[numCrates/2+1] = right;
        res += left + right;
    // if even do this
    } else {
        int left = numTrucks(numCrates/2,loadSize);
        memo[numCrates/2] = left;
        int right = numTrucks(numCrates/2,loadSize);
        memo[numCrates/2] = right;
        res += left + right;
    }

    // returns however many in either the branch or the main
    return res;
}
