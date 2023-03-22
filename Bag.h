#ifndef BAG_H
#define BAG_H

#include<vector>
#include<cstdlib>
#include<ctime>

template<class T>

class Bag 
{
private:
    std::vector<T> bagOfStuff;
public:
    Bag(){}; 
    void addItem(T item) {
        bagOfStuff.push_back(item);
        return;
    };
    void removeItem() {
        srand (time(NULL));
        int sizeOfBag = this->bagOfStuff.size();
        int itemToRemove = rand() % sizeOfBag;

        this->bagOfStuff.erase(bagOfStuff.begin()+itemToRemove);
        return;
    };
};



#endif // BAG_H
