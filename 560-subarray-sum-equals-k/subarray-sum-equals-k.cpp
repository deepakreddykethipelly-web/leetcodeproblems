class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,int> prefixcount;
        prefixcount.reserve(nums.size()*2);
        prefixcount[0]=1;
        int currentsum=0;
        int numberofsubarrays=0;
        for(int num : nums){
            currentsum+=num;
          int  target=currentsum - k;
          auto it=prefixcount.find(target);
          if(it != prefixcount.end())
          {
            numberofsubarrays+=it->second;
          }
          prefixcount[currentsum]++;
        }
      return numberofsubarrays;
    }
};