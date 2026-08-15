#include<stdio.h>
#include<stdlib.h>
typedef struct hashnode{
    int key;
    int val;
    struct hashnode* next;
}hashnode;
int hash(int key,int size){
    int h=key%size;
    return (h<0)?h+size:h;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int* result=(int*)malloc(2*sizeof(int));
    int tablesize=2*numsSize;
    hashnode** table=(hashnode**)calloc(tablesize,sizeof(hashnode*));
    for(int i=0;i<numsSize;i++)
    {
        int complement=target-nums[i];
        int comphash=hash(complement,tablesize);
        hashnode* curr=table[comphash];
        while(curr!=NULL){
            if(curr->key==complement){
                result[0]=curr->val;
                result[1]=i;
                for(int j=0;j<tablesize;j++){
                    hashnode* temp=table[j];
                    while(temp!=NULL){
                        hashnode* tofree=temp;
                        temp=temp->next;
                        free(tofree);
                    }
                }
                free(table);
                return result;
            }
            curr=curr->next;
        }
        int numhash=hash(nums[i],tablesize);
        hashnode* newnode=(hashnode*)malloc(sizeof(hashnode));
        newnode->key=nums[i];
        newnode->val=i;
        newnode->next=table[numhash];
        table[numhash]=newnode;
    }
    for(int j=0;j<tablesize;j++){
                    hashnode* temp=table[j];
                    while(temp!=NULL){
                        hashnode* tofree=temp;
                        temp=temp->next;
                        free(tofree);
                    }
    }
    free(table);
    free(result);
    *returnSize=0;
    return NULL;
}
