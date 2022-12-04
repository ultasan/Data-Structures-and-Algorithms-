# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* NewNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    (*newNode).data = data;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}




struct Node* Insert(struct Node* rootptr, int data){
    if(rootptr == NULL){
        rootptr = NewNode(data);
        return rootptr;
    }
    else {
        if(data <= (*rootptr).data){
            rootptr->left = Insert(rootptr->left, data);
        }
        else{
            rootptr->right = Insert(rootptr->right,data);
        }
    }
    return rootptr;
}


bool Search(struct Node* rootptr, int data){
    struct Node* temp = NULL;
    temp = rootptr;
    if(rootptr== NULL){
        printf("\nFalse\n");
        return 0;
    }
    if(data == rootptr->data){
        printf("\nTrue\n");
        return 1;
        }
    while(rootptr!=NULL){
        if(data > rootptr->data){
            if(rootptr->right == NULL){
                printf("\nFalse\n");
                return 0;
            }
            rootptr = rootptr->right;
            if(rootptr->data == data){
                printf("\nTrue\n");
                return 1;
            }
        }
        if(data <= rootptr->data){
            if(rootptr->left == NULL){
                printf("\nFalse\n");
                return 0;
            }
            rootptr = rootptr->left;
            if(rootptr->data == data){
                printf("\nTrue\n");
                return 1;
            }
        }
    }
    rootptr = temp;
}

int main(){
    struct Node* rootptr  = NULL;
    rootptr = Insert(rootptr, 15);
    rootptr = Insert(rootptr, 10);
    rootptr = Insert(rootptr, 20);
    Search(rootptr, 20);
}