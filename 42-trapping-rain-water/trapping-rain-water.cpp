class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       int left=0;
       int right=height.size()-1;
       int leftmax=0;
       int rightmax=0;
       int totalwater=0;
       while(left<right)
       {
        leftmax=max(leftmax,height[left]);
        rightmax=max(rightmax,height[right]);
        if(leftmax<rightmax)
        {
            totalwater+=leftmax-height[left];
            left++;
        }
        else
        {
            totalwater+=rightmax-height[right];
            right--;
        }
       }
       return totalwater;
    }
};