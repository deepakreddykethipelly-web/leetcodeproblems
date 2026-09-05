bool isAnagram(char* s, char* t) {
    int lens=strlen(s);
    int lent=strlen(t);
    if(lens!=lent)
    return false;
    int count[26]={0};
    for(int i=0;i<lens;i++)
    {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}