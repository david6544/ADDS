#include"Database.h"
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

int main(void) {
    Database D1;

    D1.addDocument("The Great Gatsby", 1, 2);
    D1.addPatron(23);
}