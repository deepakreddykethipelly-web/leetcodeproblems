class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int left=0,right=height.size()-1;
        int max1=0;
        while(right>left)
        {
            int width=right-left;
            int ch=min(height[left],height[right]);
            max1=max(max1,width*ch);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
return max1;
    }
};