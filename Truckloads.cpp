#include "Truckloads.h"

Truckloads::Truckloads(){
    
}

int Truckloads::numTrucks(int numCrates,int loadSize){
    int res = 0;

    // base case
    if (numCrates <= loadSize) {
        return 1;
    }


    //if odd do this
    if (numCrates % 2 == 1) {
        res += numTrucks(numCrates/2,loadSize);
        res += numTrucks(numCrates/2+1,loadSize);

    // if even do this
    } else {
        res += numTrucks(numCrates/2,loadSize);
        res += numTrucks(numCrates/2,loadSize);
    }

    // returns however many in either the branch or the main
    return res;
}
