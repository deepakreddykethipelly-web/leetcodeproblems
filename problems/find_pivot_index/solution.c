int pivotIndex(int* nums, int numsSize) {
    int totalsum;
    for(int i=0;i<numsSize;i++)
    {
        totalsum+=nums[i];
    }
    int leftsum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(leftsum==totalsum-leftsum-nums[i])
        {
            return i;
        }
        leftsum+=nums[i];
    }
    return -1;
}