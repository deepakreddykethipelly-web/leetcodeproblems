class Solution {
public:
 string togetofcanonicalkey(const string& str){
    unordered_map<char,int> firstseen;
    string key="";
    for(int i=0;i<str.length();i++)
    {char c=str[i];
        if(!firstseen.count(c)){
            firstseen[c]=i;
        }
        key+=to_string(firstseen[c])+",";
    }
    return key;
 }
    bool isIsomorphic(string s, string t) {
        return togetofcanonicalkey(s)==togetofcanonicalkey(t);
    }
};