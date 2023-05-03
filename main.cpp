#include"LinkedList.h"
#include"Node.h"
#include<iostream>


int main(void) {
    LinkedList L1;

    L1.insertFront(1);
    L1.insertFront(2);
    L1.insertFront(3);
    L1.insertFront(4);
    L1.insertFront(5);

    L1.printList();

    std::cout << std::endl;

    L1.swap(1,4);

    std::cout << L1.swap(5,6) << '\n';

    L1.printList();

    std::cout << std::endl;

    L1.find_and_delete(3);

    std::cout << L1.find_and_delete(6) << '\n';

    L1.printList();

    std::cout << std::endl;


    return 0;
}