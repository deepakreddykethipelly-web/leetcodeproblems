class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> remaindercount(k,0);
        remaindercount[0]=1;
        int totalsubarrays=0;
        int prefixsum=0;
        for(int num : nums){
            prefixsum+=num;
            int rem=(prefixsum%k+k)%k;
            totalsubarrays+=remaindercount[rem];
            remaindercount[rem]++;
        }
       return totalsubarrays;
    }
};