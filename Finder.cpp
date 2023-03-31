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
            result[i-1] = found;
        }
    }
    return result;
}
/* 
int main(void) {
    std::string s1 = "4634554567";
    std::string s2 = "45689";
    
    Finder f1;

    std::vector<int> res = f1.findSubstrings(s1,s2);


    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }

    return 0;
}
 */

   