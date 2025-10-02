#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> original;

public:
    Solution(vector<int>& nums) {
        original = nums;
        srand(time(nullptr)); // Seed for randomness
    }

    vector<int> reset() {
        return original;
    }

    vector<int> shuffle() {
        vector<int> shuffled = original;
        int n = shuffled.size();
        for (int i = n - 1; i > 0; --i) {
            int j = rand() % (i + 1); // Random index from 0 to i
            swap(shuffled[i], shuffled[j]);
        }
        return shuffled;
    }
};
