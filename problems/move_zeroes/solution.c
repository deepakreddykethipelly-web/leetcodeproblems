void moveZeroes(int* nums, int numsSize) {
    int *p=nums;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            int temp=*p;
            *p=nums[i];
            nums[i]=temp;
            p++;
        }
    }
}