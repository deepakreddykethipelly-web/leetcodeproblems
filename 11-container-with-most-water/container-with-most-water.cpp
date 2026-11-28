class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0;
        int left=0;
        int right=n-1;
        while(right>left)
        {int curr=0;
            if(height[left]>height[right])
            {
                curr=height[right]*(right-left);
                right--;
            }
            else if(height[left]<height[right])
            {
                curr=height[left]*(right-left);
                left++;
            }
            else{
                curr=height[right]*(right-left);
                right--;
            }
            maxarea=max(curr,maxarea);
        }
        return maxarea;
    }
};