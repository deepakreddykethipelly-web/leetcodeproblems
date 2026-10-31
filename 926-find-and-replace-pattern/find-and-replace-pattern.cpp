class Solution {
public:
string togetcanonicalkey(const string& str)
{
    unordered_map<char,int> firstseen;
    string key="";
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        if(!firstseen.count(c))
        {
            firstseen[c]=i;
        }
        key+=to_string(firstseen[c])+",";
    }
    return key;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> results;
        string pat=togetcanonicalkey(pattern);
        for(string i:words)
        {
            if(togetcanonicalkey(i)==pat)
            results.push_back(i);
        }
        return results;
        
    }
};