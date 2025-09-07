class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> result;
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (int d : digits) freq[d]++;

        // Try all 3-digit even numbers from 100 to 998
        for (int num = 100; num <= 999; num += 2) {
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            vector<int> tempFreq = freq;
            tempFreq[a]--;
            tempFreq[b]--;
            tempFreq[c]--;

            // Check if all digits are available
            if (tempFreq[a] >= 0 && tempFreq[b] >= 0 && tempFreq[c] >= 0) {
                result.push_back(num);
            }
        }

        return result;
    }
};
