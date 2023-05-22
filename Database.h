#ifndef DATABASE_H
#define DATABASE_H

#include"User.h"
#include"File.h"

#include<unordered_map>
#include<vector>
#include<string>

class Database
{
private:

    //O(3n) for space although allows O(1) for insertion, search and removal
    std::unordered_map<std::string,File*> files; // name -> File
    std::unordered_map<int,File*> filesByID; // id -> File
    std::unordered_map<int,User*> users; // patronID -> User
public:
    Database(/* args */);

    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docID, int patronID);
    void returnDocument(int docID, int patronID);
};
#endif // DATABASE_H
