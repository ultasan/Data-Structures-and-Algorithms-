# include <stdio.h>
# include <stdlib.h>

struct Node* Max(struct Node* rootptr){
    if(rootptr->right == NULL){
        return rootptr;
    }
    rootptr = Max(rootptr->right);
    return rootptr;
}
