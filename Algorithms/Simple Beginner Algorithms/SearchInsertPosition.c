int searchInsert(int* nums, int numsSize, int target){
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
        if(nums[i] > target){
            return i;
        }
    }
    if(nums[numsSize-1] < target){
        return numsSize;
    }
    return -1;
}
