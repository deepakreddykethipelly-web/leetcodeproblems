class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(const string& i:tokens)
        {
            if(i=="+"||i=="/"||i=="*"||i=="-")
            {
                int b=st.top();st.pop();
                int a=st.top();st.pop();
                if(i=="+")st.push(a+b);
                else if(i=="-")st.push(a-b);
                else if(i=="*")st.push(a*b);
                else st.push(a/b);
            }
            else{
                st.push(stoll(i));
            }
        }
        return st.top();
    }
};