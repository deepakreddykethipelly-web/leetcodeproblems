class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> answer(n,0);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&temperatures[i]>temperatures[st.top()])
            {
                int ind=st.top();
                st.pop();
                answer[ind]=i-ind;
            }
            st.push(i);
        }
        return answer;
    }
};