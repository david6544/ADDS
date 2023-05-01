#include "LinkedList.h"
#include<iostream>
#include<limits>

LinkedList::LinkedList() {}

LinkedList::LinkedList(int *array, int len) {
    head = nullptr;

    //going backwards from the last element in the array
    for (int i = len-1; i >= 0; i--) {
        head = new Node(array[i], head);
    }

    return;
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* Copy = head;
    Node* newNode = new Node(newNum, nullptr);

    //base case
    if (pos <= 1) {
        newNode->setLink(Copy);
        head = newNode;
        return;
    }

    for (int i = 2; i < pos; i++) {
        //std::cout << Copy->getLink() << std::endl;
        // inserting node at the end of the ll
        if (Copy->getLink() == nullptr) {
            Copy->setLink(newNode);
            return;
        } else {
           Copy = Copy->getLink();
        }
    }

    // middle insert
    newNode->setLink(Copy->getLink());
    Copy->setLink(newNode);
    
    return;
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1) return false;



    if (pos == 1) {
        head = head->getLink();
        return true;
    }

    Node* prev = head;

    for (int i = 1; i < pos-1; i++) {
        if (prev->getLink() == nullptr) return false;
        prev = prev->getLink();
    }
    if (prev->getLink() == nullptr) return false;
    prev->setLink(prev->getLink()->getLink());

    return true;
}

int LinkedList::get(int pos) {

    if (pos < 1) {return std::numeric_limits<int>::max();}

    Node* curr = head;

    //checking for early end
    for (int i = 1; i < pos; i++) {
        if (curr->getLink() == nullptr) {return std::numeric_limits<int>::max();}
        curr = curr->getLink();
    }

    return curr->getData();
}

int LinkedList::search(int target) {

    Node* curr = head;
    int count = 1;
    while (curr != nullptr) {
        if (curr->getData() == target) return count;
        count++;
        curr = curr->getLink();
    }    
    return -1;
}

void LinkedList::printList() {
    Node* copy = head;
    std::cout << "[";
    while (copy != nullptr) {
        std::cout << copy->getData();
        if (copy->getLink() != nullptr) std::cout << " ";
        copy = copy->getLink();
    }
    std::cout << "]" << std::endl;
    return;
}

LinkedList::~LinkedList() {
    Node* curr = head;
    while (head!= nullptr) {
        curr = head;
        head = head->getLink();
        delete curr;
    }
}



