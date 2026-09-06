int missingNumber(int* nums, int numsSize) {
    int exsum=numsSize*(numsSize+1)/2;
    int actualSum=0;
    for(int i=0; i< numsSize;i++){
        actualSum+=nums[i];
    }
    return exsum-actualSum;
}