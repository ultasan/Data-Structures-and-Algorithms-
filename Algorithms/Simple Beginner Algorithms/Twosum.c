# include <stdio.h>
# include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target){
    int num1 =0;
    int num2 = 0;
    int *result = (int*)malloc(2*sizeof(int));
    int i, j;
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                result[0] = j;
                result[1] = i;
                break;
            }
        }
    }
    return result;
}

int main(){
    int *nums;
    int i;
    int numsSize = 0;
    int target = 0;
    int *returnsize = (int*)malloc(2*sizeof(int));
    printf("How many elements are there?: \n");
    scanf("%d", &numsSize);
    for(i=0;i<numsSize;i++){
        printf("\nWhat is the %d element\n", i);
        scanf("%d", &nums[i]);
    }
    printf("Lastly what should be the target value?: \n");
    scanf("%d", &target);
    returnsize = twoSum(nums, numsSize, target);
    for(i=0;i<2;i++){
        printf("%d ", returnsize[i]);
    }
}