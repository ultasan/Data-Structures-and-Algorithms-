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
