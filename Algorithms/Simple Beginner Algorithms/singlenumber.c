int singleNumber(int* nums, int numsSize){
    int i, j;
    printf("%d", numsSize);
    for(i=0;i<numsSize;i++){
        if(i == numsSize-1){
            return nums[i];
        }
        for(j=0;j<numsSize;j++){
            if(i==j){
                j++;
            }
            if(nums[i] == nums[j]){
                break;
                nums[i] = 77;
                nums[j] = 77;
            }
            if(nums[i] != nums[j] && j == numsSize-1){
                return nums[i];
            }
        }
    }
    return -1;
}
