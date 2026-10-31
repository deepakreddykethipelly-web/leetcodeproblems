class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixsum;
        prefixsum[0]=1;
        int currsum=0;
        int count=-0;
        for(int x:nums)
        {currsum+=x;
            int target=currsum-k;
            if(prefixsum.count(target))
            {
                count+=prefixsum[target];
            }
            prefixsum[currsum]++;
        }
        return count;
    }
};