
#include "User.h"
#include <string>
#include <unordered_map>

struct File{
    std::string name;
    int identifier;
    int copyLimit;
    std::unordered_map<int,User> borrowers; // patronID -> User
};
