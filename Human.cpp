#include"Human.h"
#include<string>
#include<iostream>

Human::Human() {
    this->Name = "Human";
}

Human::Human(std::string name) {
    this->Name = name;
}

char Human::makeMove() {
    char temp;
    std::cout << "Make Move: ";
    std::cin >> temp;
    return temp;
}

std::string Human::getName() {
    return Name;
}