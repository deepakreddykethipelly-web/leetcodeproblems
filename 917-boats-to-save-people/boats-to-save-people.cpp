class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(people.begin(),people.end());
        int left=0;
        int right=people.size()-1;
        int boat=0;
        while(right>=left)
        {
          if(people[left]+people[right]<=limit)
          {
            left++;
          }
          right--;
          boat++;
        }
        return boat;
    }
};