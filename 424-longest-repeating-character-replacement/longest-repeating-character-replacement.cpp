class Solution {
public:
    int characterReplacement(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> count(26,0);
        int maxlength=0;
        int left=0;
        int maxfreq=0;
        for(int right=0;right<s.size();right++)
        {
            count[s[right]-'A']++;
            maxfreq=max(maxfreq,count[s[right]-'A']);
            if((right-left+1)-maxfreq>k)
            {
                count[s[left]-'A']--;
                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};