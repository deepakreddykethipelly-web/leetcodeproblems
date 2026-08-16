/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int* arr=(int*)malloc((*returnSize)*sizeof(int));
    if(arr==NULL){
*returnSize=0;
return NULL;
    }
    for(int i=0;i<numsSize;i++)
    {
        arr[i]=nums[i];
        arr[i+numsSize]=nums[i];

    }
    return arr;
}