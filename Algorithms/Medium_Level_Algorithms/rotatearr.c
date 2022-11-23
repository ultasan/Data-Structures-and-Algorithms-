
# include <stdio.h>
# include <stdlib.h>

int* rotate(int* nums, int numsSize, int k){
   int i, j;
   int *arr = (int*)malloc(numsSize*sizeof(int));
   int count = 0;
   int half = numsSize/2;
   int last = (numsSize-1+k)%numsSize;
   int temp;
   for(i=0;i<numsSize;i++){
      if(i>=4){
         if(count == 2){break;}
         temp = i;
         i = (i+k)%numsSize;
         count++;
      }
      arr[i+k] = nums[i];
      if(temp = i){
         i = temp;
      }
   }
   for(i=0;i<numsSize;i++){
      arr[last-i] = nums[numsSize-1-i];
   }
   
   return arr;
}


int main(){
	int k;
	int i;
	int numsSize = 7;
   printf("What should the amount of rotations be?: \n");
   scanf("%d", &k);
   printf("\nWhat should the amount of elements be?: \n");
   scanf("%d", &numsSize);
   printf("\n");
	int *nums = (int*)malloc(numsSize*sizeof(int));
	for(i=0;i<numsSize;i++){
		printf("what should the number be?:\n");
		scanf("%d", &nums[i]);
}
	int*arr = rotate(nums, numsSize, k);
	for(i=0;i<numsSize; i++){
      printf("    %d\n", arr[i]);
   }
}
