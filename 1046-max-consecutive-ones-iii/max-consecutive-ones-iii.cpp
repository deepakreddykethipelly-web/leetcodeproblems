class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        int maxlength=0;
        int left=0;
        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]==0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[left]==0)
                {
                    count--;
                }
                left++;
            }
            if(right-left+1>maxlength)
            maxlength=right-left+1;
        }
        return maxlength;
    }
};