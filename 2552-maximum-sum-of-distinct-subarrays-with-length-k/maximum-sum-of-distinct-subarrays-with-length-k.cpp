class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxSum=0;
        long long currentSum =0;
        std::vector<int>freq(100001,0);
        int distinctCount=0;
        for(int i=0;i<k;++i){
            currentSum+=nums[i];
            if(freq[nums[i]]==0){
                distinctCount++;
            }
            freq[nums[i]]++;
        }
        if(distinctCount==k){
            maxSum=currentSum;
        }
        for(int i=k;i<n;++i){
            int outgoing = nums[i-k];
            currentSum-=outgoing;
            freq[outgoing]--;
            if(freq[outgoing]==0){
                distinctCount--;
            }
            int incoming=nums[i];
            currentSum+=incoming;
            if(freq[incoming]==0){
                distinctCount++;
            }
            freq[incoming]++;
            if(distinctCount==k){
                maxSum=std::max(maxSum,currentSum);
            }
        }
        return maxSum;
    }
};