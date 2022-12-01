# include <stdio.h>
# include <stdlib.h>


void sort(int *arr, int size){
    int min = 0;
    int temp;
    int i,j;
    for(i=0;i<size;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(arr[j]< arr[min]){
                min = j;
        }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;  
    }
    printf("The sorted array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
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
    sort(arr,size);
}
