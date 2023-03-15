#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include<unordered_map>


class EfficientTruckloads {
private:
public:
    EfficientTruckloads();
    std::unordered_map<int,int> memo;
    int numTrucks(int numCrates, int loadSize);
};

#endif // TRUCKLOADS_H
