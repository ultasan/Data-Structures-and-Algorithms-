# include <stdio.h>
# include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* tail;
struct Node* head;

void NewNode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data = data;
    (*temp).next = NULL;
    if(tail == NULL){
        tail = temp;
        return;
    }
    (*tail).next = temp;
    tail = temp;
    free(temp);
}

void Print(){
    struct Node* temp = head;
    printf("The Linked list is: ");
    while((*temp).next != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    free(temp);
    return;
}


int main(){
    int size;
    int i;
    int data;
    head = NULL;
    tail = NULL;
    printf("How many elements would you like n your list?: \n");
    scanf("%d", &size);
    for(i=0;i<size;i++){
        printf("What should the %d number be?: \n", i);
        scanf("%d", &data);
        printf("jere");
        NewNode(data);
        printf("here");
        Print();
    }
    free(head);
    free(tail);
}