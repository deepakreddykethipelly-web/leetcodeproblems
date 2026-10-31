class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word)
        {
            words.push_back(word);
        }
        unordered_map<char,int> patternfirstseen;
        string patternkey="";
        for(int i=0;i<pattern.length();i++)
        {
            char c=pattern[i];
            if(!patternfirstseen.count(c)){
                patternfirstseen[c]=i;
            }
            patternkey+=to_string(patternfirstseen[c])+",";
        }
        unordered_map<string,int> wordsfirstseen;
        string wordkey="";
        for(int i=0;i<words.size();i++)
        {string c=words[i];
            if(!wordsfirstseen.count(c))
            {
                wordsfirstseen[c]=i;
            }
            wordkey+=to_string(wordsfirstseen[c])+",";
        }
        return(patternkey==wordkey);
    }
};