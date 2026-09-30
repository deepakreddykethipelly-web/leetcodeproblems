class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> s1count(26,0);
        vector<int> windowcount(26,0);
        int windowsize=s1.size();
        if(windowsize>s2.size())
        return false;
        int left=0;
        for(char e : s1 )
        s1count[e-'a']++;
        for(int right=0;right<s2.size();right++)
        {
            windowcount[s2[right]-'a']++;
            if(right-left +1 >windowsize)
            {
                windowcount[s2[left]-'a']--;
                left++;
            }
            if(right-left+1==windowsize)
            {
                if(s1count==windowcount)
                return true;
            }
        }
        return false;
    }
};