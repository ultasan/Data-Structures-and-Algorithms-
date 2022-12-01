# include <stdio.h>


int main(){
    int arr[] = {3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    int i;
    int j;
    int temp = 0;
    int min = 0;
    int l = 0;
    for(i=0;i<size;i++){
        min = i;
        printf("min: %d\n", min);
        for(j=i+1;j<size;j++){
            if(arr[j]< arr[min]){
                min = j;
        }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;  
    }
    printf("The array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}
