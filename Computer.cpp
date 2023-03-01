#include"Computer.h"
#include<string>
#include<iostream>

Computer::Computer() {
    this->Name = "Computer";
}

char Computer::makeMove() {
    return 'R';
}

std::string Computer::getName() {
    return this->Name;
}