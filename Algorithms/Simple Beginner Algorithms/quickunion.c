# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

int id[] = {0, 1, 2, 3, 4 ,5};

int root(int i){
    while(i != id[i]){
        i = id[i];
        if(i==id[i]){
            return i;
        }
    }
};



bool connected(int p, int q){
    if(root(p) == root(q)){
        printf("\nTrue\n");
        return 1;
    }
    printf("\nFalse\n");
    return 0;
}

void uni2(int p, int q){
    int size = sizeof(id)/sizeof(int);
    int i = root(p);
    int j = root(q);
    id[i] = j;
    for(i=0;i<size;i++){
        printf("%d ", id[i]);
    }
    printf("\n");
};

int main(){
    uni2(5, 3);
    uni2(3, 2);
    connected(5,2); 
    connected(2, 3);
    uni2(5, 1);
    
};