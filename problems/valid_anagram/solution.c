bool isAnagram(char* s, char* t) {
    int l=strlen(s),l1=strlen(t);
    if(l!=l1)
    return false;
int count[26]={0};
for(int i=0;i<l;i++)
{
    count[s[i]-'a']++;
    count[t[i]-'a']--;
}
for(int i=0;i<26;i++)
{
    if(count[i]!=0)
    {
        return false;
    }
}
return true;
}