class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums1.size();
        unordered_map<int,int> sumab;
        sumab.reserve(n*n);
        for(int a : nums1){
            for(int b: nums2){
                sumab[a+b]++;
            }
        }
        int count=0;
        for( int c : nums3){
            for(int d : nums4){
                int target=-(c+d);
                auto it=sumab.find(target);
                if(it!=sumab.end()){
                    count += it->second;
                }
            }
        }
        return count;
    }
};