bool canConstruct(char* ransomNote, char* magazine) {
    int mlen=strlen(magazine);
    int rlen=strlen(ransomNote);
    if(rlen>mlen)
    return false;
    int ino[26]={0};
    for(int i=0;i<mlen;i++)
    {
        ino[magazine[i]-'a']++;
    }
    for(int i=0;i<rlen;i++){
        int a=ransomNote[i]-'a';
        ino[a]--;
        if(ino[a]<0)
        return false;
    }
    return true;
}