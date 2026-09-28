class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int> count;
        int pairs=0;
        for(int num:nums){
            pairs +=count[num];
            count[num]++;
        }
        return pairs;
    }
};