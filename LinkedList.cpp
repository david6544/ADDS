#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {

	if (pos1 < 0 || pos2 < 0) return false;
	//if (pos1 == pos2) return true;

	if (pos1 < pos2) {
		int temp = pos2;
		pos2 = pos1;
		pos1 = temp;
	}
	Node* Curr = head;

	Node* Node1 = head;

	int data1 = 0;

	for (int i = 0; i < pos1 && Curr != nullptr; i++) {
		if (i == pos2 && i != pos1) {
			data1 = Curr->data;
			Node1 = Curr;
		}
		Curr = Curr->link;
	}
	
	if (Curr != nullptr) {
		Node1->data = Curr->data;
		Curr->data = data1;
	} else {
		return false;
	}

	return true;
}

bool LinkedList::find_and_delete(int target) {
	Node* Curr = head;
	while (Curr->link != nullptr) {

		//checks if the next node is the one to delete
		if (Curr->link->data == target) {
			//deletes the next node
			Node*Temp = Curr->link;

			//chains the current node to the one past the end;
			Curr->link = Curr->link->link;
			delete Temp;
			return true;
		}
		Curr = Curr->link;
	}

	return false;
}