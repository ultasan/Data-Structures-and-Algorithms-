# include <stdio.h> 
# include <stdlib.h>


void bubblesort(int *arr, int size){
    int i;
    int j;
    int temp = 0;
    int count = 0;
    for(j=0;j<size-1;j++){
        for(i=0;i<size-j-1;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(){
    int i;
    int size = 0;
    printf("What is the number of elements you want in the array?: \n");
    scanf("%d", &size);
    int *arr = calloc(size,sizeof(int));
    
    for(i=0;i<size;i++){
        printf("What should the %d number be?: \n", i);
        scanf("%d", &arr[i]);
    }
    printf("The original array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubblesort(arr,size);
}