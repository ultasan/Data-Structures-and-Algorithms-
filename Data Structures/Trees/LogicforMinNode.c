struct Node* Min(struct Node* rootptr){
    if(rootptr->left == NULL){
        return rootptr;
    }
    rootptr = Min(rootptr->left);
    return rootptr;
}
