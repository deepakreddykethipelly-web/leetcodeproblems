class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        if(n<3) return result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 and nums[i]==nums[i-1]) continue;
            int left=i+1,right=n-1;
            while(right>left){
                int sum=0;
                sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(right>left && nums[left]==nums[left+1])
                    left++;
                    while(right>left && nums[right]==nums[right-1])
                    right--;
                    right--;
                    left++;
                }
                else if(sum>0)
                right--;
                else
                left++;

            }
        }
        return result;
    }
};