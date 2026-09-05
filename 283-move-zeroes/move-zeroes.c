void moveZeroes(int* nums, int numsSize) {
    int lastnonzero=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0){
            nums[lastnonzero]=nums[i];
            lastnonzero++;
        }
    }
    for(int i=lastnonzero;i<numsSize;i++)
    {
        nums[i]=0;
    }
}