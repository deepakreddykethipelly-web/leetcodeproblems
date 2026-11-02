class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> remCount(k, 0);
        
        remCount[0] = 1;

        int currSum = 0;
        int count = 0;

        for (int x : nums) {
            currSum += x;

            
            int rem = (currSum % k + k) % k;

            
            count += remCount[rem];

            
            remCount[rem]++;
        }

        return count;
    }
};