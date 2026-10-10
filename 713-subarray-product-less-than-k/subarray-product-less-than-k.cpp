class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int left=0;
        int count=0;
        long long product=1;
        if(k<=1)return 0;
        for(int right=0;right<nums.size();right++)
        {
            product *=nums[right];
            while(product>=k)
            {
                product/=nums[left];
                left++;
            }
            count+=(right-left+1);
        }
        return count;
    }
};