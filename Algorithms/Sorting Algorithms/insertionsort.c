# include <stdio.h>


int main(){
    int arr[] = {2, 7, 4, 1};
    int temp;
    int i,j;
    int hole;
    int size = sizeof(arr)/sizeof(int);
    for(i=1;i<size-1;i++){
        for(j=0;j<size;j++){
            temp = arr[i];
            hole = i;
            while(hole>0 && arr[hole-1] > temp){
                arr[hole] = arr[hole-1];
                hole--;
            }
            arr[hole] = temp;
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}