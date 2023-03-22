#include"Bag.h"
#include<cstdlib>
#include<vector>



template<class T>
void Bag<T>::addItem(T item) {

    this->bagOfStuff.push_back(item);

    return;
}

void Bag<void>::removeItem() {
    int sizeOfBag = this->bagOfStuff.size();
    int itemToRemove = rand() % sizeOfBag;

    this->bagOfStuff.erase(bagOfStuff.begin()+itemToRemove);
    return;
}


int main(void) {
    Bag<int> b1;


}