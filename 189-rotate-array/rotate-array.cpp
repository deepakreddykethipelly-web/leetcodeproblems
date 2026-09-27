class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
k%=nums.size();
std::rotate(nums.rbegin(),nums.rbegin()+k,nums.rend());
    }
};