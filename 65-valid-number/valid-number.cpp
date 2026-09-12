class Solution {
public:
    bool isNumber(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        bool isnumber=false;
        bool isexpo=false;
        bool isdot=false;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i])){
                isnumber=true;
            }
            else if(s[i]=='+'||s[i]=='-')
            {
                if(i>0 && s[i-1]!='e'&&s[i-1]!='E'){
                    return false;
                }
            }
            else if(s[i]=='.'){
                if(isdot||isexpo){
                    return false;
                }
                isdot=true;
            }
            else if(s[i]=='e'||s[i]=='E'){
                if(isexpo||!isnumber)
                {
                    return false;
                }
                isnumber=false;
                isexpo=true;
            }
            else{
                return false;
            }
        }
        return isnumber;
    }
};