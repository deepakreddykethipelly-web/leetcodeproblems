class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() % 2 != 0) {
            return {};
        }

    
        sort(changed.begin(), changed.end());

        unordered_map<int, int> freq;
        for (int num : changed) {
            freq[num]++;
        }

        vector<int> original;

        for (int x : changed) {
            if (freq[x] == 0) continue;

            
            freq[x]--;

            
            if (freq[2 * x] == 0) {
                return {}; 
            }

    
            freq[2 * x]--;
            original.push_back(x);
        }

        return original;
    }
};