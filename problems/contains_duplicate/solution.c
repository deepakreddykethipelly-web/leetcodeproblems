int compare(const void *a,const void *b)
{
    int num1=*(const int*)a;
    int num2=*(const int*)b;
    if(num1<num2) return -1;
    if(num1>num2) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        return true;
    }
    return false;
}