# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

int *arr;
int size;


int push(int x){
    size++;
    arr = (int*)realloc(arr, size*sizeof(int));
    arr[size-1] = x;
    return arr[size-1];
}

int pop(){
    int temp = arr[size-1];
    size--;
    arr = (int*)realloc(arr,size*sizeof(int));
    return temp;
}

bool isEmpty(){
    if(size == 0){
        printf("The array is empty!\n");
        return 0;
    }
    else{
        printf("The array is not empty\n");
        return 1;
    }
}


int main(){
    printf("How many numbers do you want?: \n");
    scanf("%d", &size);
    arr = (int*)malloc(size*sizeof(int));
    int i;
    int x =0;
    bool c = isEmpty();
    for(i=0;i<size;i++){
        printf("What should be the %d element?: \n", i);
        scanf("%d", &arr[i]);
    }
    int popped = pop();
    printf("Popped element: %d\n", popped);
    bool t = isEmpty();
    printf("What integer would you like to push?: \n");
    scanf("%d", &x);
    int pushed = push(x);
    printf("\nPushed element: %d\n", pushed);
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
}


