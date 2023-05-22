#include "Database.h"
#include"User.h"

Database::Database()
{
}

void Database::addDocument(std::string name, int id, int license_limit){
    File* newFile = new File();
    newFile->name = name;
    newFile->identifier = id;
    newFile->copyLimit = license_limit;

    this->files[name] = newFile;
    this->filesByID[id] = newFile;
}

void Database::addPatron(int patronID)
{
    User* newUser = new User(patronID);
    this->users[patronID] = newUser;
}

int Database::search(std::string name)
{
    if (files.find(name) != files.end()) {
        int returnID = files[name]->identifier;
        return returnID;
    }
    return 0;
}

bool Database::borrowDocument(int docID, int patronID)
{
    if ((users.find(patronID) != users.end()) && 
    (filesByID.find(docID) != filesByID.end()) && 
    (filesByID[docID]->borrowers.size() < filesByID[docID]->copyLimit)) {
        filesByID[docID]->borrowers[patronID] = *users[patronID];
        return true;
    }
    return false;
}

void Database::returnDocument(int docID, int patronID){
    filesByID[docID]->borrowers.erase(patronID);
}





