class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int longestarray=1,arr=1;
        if(nums.size()==0)
        {
            return 0;
        }
        
        std::sort(nums.begin(),nums.end() );
        for(int i=0;i<nums.size()-1;i++)
        {
if(nums[i+1]==nums[i]){
    continue;
}
if(nums[i+1]==nums[i]+1)
{
    arr++;
}
else
{
    longestarray=max(longestarray,arr);
    arr=1;
}
        }
        return max(longestarray,arr);
    }
};