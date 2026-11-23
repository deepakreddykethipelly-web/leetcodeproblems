class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int , double>> cars;
        for(int i=0;i<n;i++)
        {
            cars.push_back({position[i],(double)(target-position[i])/speed[i]});
        }
        sort(cars.rbegin(),cars.rend());
stack<double> st;
for(auto &[pos,time]:cars)
{
    if(st.empty()||st.top()<time)
    {
        st.push(time);
    }
}
return st.size();
    }
};