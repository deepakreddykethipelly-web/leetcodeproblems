class Solution {
public:
bool isvowel(char s){
    return s=='a'||s=='i'||s=='o'||s=='u'||s=='e';
}
    int maxVowels(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0,max=0;
        for(int i=0;i<k;i++)
        {
            if(isvowel(s[i]))
            {
                count++;
            }
        }
        if(count==k)return k;
        max=count;
        for(int right=k;right<s.size();right++)
        {
if(isvowel(s[right]))
count++;
if(isvowel(s[right-k]))
count--;
if(count>max)
max=count;
    
        }
        return max;
    }
};