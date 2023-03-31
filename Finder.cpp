#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result (s2.size(),-1);

    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = -1;
        for (int j = 0; j < s1.size(); j++) {
            if (s1[j] != s2[0]) continue;
            found = s1.find(s2.substr(0, i));
            if (found == -1) break; 
        }
        if (found != string::npos) {
            result[i] = found;
        }
    }
    return result;
}

   