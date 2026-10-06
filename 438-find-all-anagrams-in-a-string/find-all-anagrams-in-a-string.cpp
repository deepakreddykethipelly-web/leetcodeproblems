class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int left=0;
        vector<int> index;
        if(p.size()>s.size())
        return index;
        vector<int> pcount(26,0);
        vector<int> scount(26,0);
        for(int i=0;i<p.size();i++)
        {
        pcount[p[i]-'a']++;
        scount[s[i]-'a']++;
        }
        if(pcount==scount)
        {
          index.push_back(0);
        }
        for(int right=p.size();right<s.size();right++)
        {
            scount[s[right]-'a']++;
            scount[s[left]-'a']--;
            left++;
            if(scount==pcount)
            {
                index.push_back(left);
            }
        }
       return index; 
    }
};