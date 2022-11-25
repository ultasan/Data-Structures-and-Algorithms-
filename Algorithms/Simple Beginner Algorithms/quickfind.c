# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

int id[] = {0, 1, 2, 3, 4 ,5};
int idea[] = {0, 1, 2, 3, 4 ,5};

bool connected(int p, int q){
    if(idea[p] == idea[q]){
        printf("\nTrue\n");
        return 1;
    }
    printf("\nFalse\n");
    return  0;
};

void uni2(int p, int q){
    int size = sizeof(id)/sizeof(int);
    int i;
    for(i=0;i<size;i++){
        if(idea[i] == id[p]){
            idea[i] = id[q];
        }
    }
    for(i=0;i<size;i++){
        printf("%d ", idea[i]);
    }
    printf("\n");
};

int main(){
    int size = sizeof(id)/sizeof(int);
    uni2(5, 3);
    uni2(3, 2);
    connected(5,2); 
    connected(2, 3);
    connected(4, 3);
};