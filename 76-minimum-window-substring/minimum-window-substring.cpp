class Solution {
public:
    string minWindow(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>map(128,0);
        for(char c:t)
        {
            map[c]++;
        }
        int left=0,right=0;
        int required=t.size();
        int minlen=INT_MAX;
        int startindex=0;
        while(right<s.size())
        {
            if(map[s[right]]>0)
            {
                required--;
            }
            map[s[right]]--;
            while(required==0)
            {
                if(right-left+1<minlen)
                {
                    minlen=right-left+1;
                    startindex=left;
                }
                map[s[left]]++;
                if(map[s[left]]>0){
                    required++;
                }
                left++;
            }
            right++;
        }
        return minlen==INT_MAX?"":s.substr(startindex,minlen);
    }
};