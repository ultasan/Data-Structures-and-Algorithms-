# include <stdio.h>
# include <stdlib.h>


struct Node {
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* NewNode(int data){}

struct Node* Insert(struct Node* root, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(root == NULL){
        root = temp;
        root->data = data;
        return root;
    }
    else {
        if(data > root->data){
            Insert(root->right, data);
        }
        if(data < root->data){
            Insert(root->right, data);
        }
    }
}


int main(){
    struct Node* root = NULL;
    root = Insert(root, 25);
}
