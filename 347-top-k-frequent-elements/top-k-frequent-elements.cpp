class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> count;
       for(int num : nums){
        count[num]++;
       } 
       int n=nums.size();
       vector<vector<int>> buckets(n+1);
       for(auto& [num, freq] : count){
        buckets[freq].push_back(num);
       }
       vector<int> result;
       for(int freq=n;freq>= 1&& result.size()<k;freq--){
        for(int num : buckets[freq]){
            result.push_back(num);
            if(result.size()==k){
                return result;
            }
        }
       }
       return result;
    }
};