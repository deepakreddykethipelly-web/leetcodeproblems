class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> lastseen(128,-1);
        int left=0;
        int maxlength=0;
        for(int right=0;right<s.length();right++)
        {
            char currentchar=s[right];
            if(lastseen[currentchar]>=left)
            left=lastseen[currentchar]+1;
            lastseen[currentchar]=right;
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};