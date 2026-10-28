class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest=0;
        for(int i:st){
        if(st.count(i-1)==0)
        {
            int curnum=i;
            int streak=1;
        
        while(st.count(curnum+1)==1)
        {
            curnum++;
            streak++;
        }
        longest=max(longest,streak);
     }
        }
    return longest;
    }
};