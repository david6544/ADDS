#include<queue>
#include<vector>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> pQ;
    for (auto x : values) {
        pQ.push(x);
    }

    for (int i = 1; i < k; i++) {
        pQ.pop();
    }
    return pQ.top();
}