#ifndef BAG_H
#define BAG_H

#include<vector>

template<class T>

class Bag 
{
private:
    std::vector<T> bagOfStuff;
public:
    Bag(){}; 
    void addItem(T item);
    void removeItem();
};



#endif // BAG_H
