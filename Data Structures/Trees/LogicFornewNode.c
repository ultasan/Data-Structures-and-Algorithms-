# include <stdio.h>

struct Node{
    int data;
    struct Node* left_child;
    struct Node* right_child;
};

struct Node* root = NULL;
struct Node* head = NULL;


struct Node* Newnode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data = data;
    if(root == NULL){
        root = temp;
        temp->right_child = NULL;
        temp->left_child = NULL;
        head = root;
        return root;
    }
    else{
        while(root!=NULL){
            if(data > root->data){
                if(root->right_child==NULL){
                    root->right_child = temp;
                    temp->right_child = NULL;
                    temp->left_child = NULL;
                    return temp;
                }
                root = root->right_child;
            }
            if(data <= root->data){
                if(root->left_child==NULL){
                    root->left_child = temp;
                    temp->right_child = NULL;
                    temp->left_child = NULL;
                    return temp;
                }
                root = root->left_child;
            }

        }
    }
    root = head;
    return temp;
}



int main(){
    struct Node* temp = Newnode(5);
}
