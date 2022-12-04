bool Search(struct Node* root, int data){
    if(root==NULL){
        printf("\nFalse\n");
        return 0;
    }
    if(data == root->data){
        printf("\ntrue\n");
        return 1;
    }
    if(data<= root->data){
        return Search(root->left,data);
    }
    if(data > root->data){
        return Search(root->right,data);
    }
}