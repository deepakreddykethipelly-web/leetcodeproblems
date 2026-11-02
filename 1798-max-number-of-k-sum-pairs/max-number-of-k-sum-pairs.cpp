class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int operations = 0;

        for (int x : nums) {
            int target = k - x;

            if (freq[target] > 0) {
                operations++;
                freq[target]--;
            } else {
            
                freq[x]++;
            }
        }

        return operations;
    }
};