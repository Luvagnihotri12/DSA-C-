class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;       // Monotonic decreasing stack
        int ak = INT_MIN;    // Potential '2' in the 132 pattern

        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] < ak) return true;  // Found a valid '1' < '2' < '3'
            while (!st.empty() && st.top() < nums[i]) {
                ak = st.top();  // Update ak to largest '2' less than current '3'
                st.pop();
            }
            st.push(nums[i]);  // Current num could be a future '3'
        }

        return false;
    }
};
