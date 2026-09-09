class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,int> seen;
        seen.reserve(nums.size()*2);
        seen[0]=-1;
        int prefixsum=0;
        int maxlength=0;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=(nums[i]==1)?1:-1;
            auto it= seen.find(prefixsum);
            if(it != seen.end()){
                maxlength=max(maxlength,i-it->second);
            }
            else{
                seen[prefixsum]=i;
            }
        }
        return maxlength;
    }
};