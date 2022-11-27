# include <stdio.h>
# include <stdlib.h>

struct stack {
	int data;
	struct stack* Next;
};

struct stack* top = NULL;

int Push(int num){
	struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
	(*temp).data = num;
	(*temp).Next = top;
	top = temp;
	printf("Data: %d, Next: %p", temp->data, temp->Next);
};


void Pop(){
	struct stack* temp;
	if(top == NULL){
		return;
}
	temp = top;
	top = top->Next;
	free(temp);
};


int IsEmpty(){
	if(top == NULL){
		printf("True");
		return 0;
}
	else{
		printf("False");
		return 0;
}
};

int main(){
	int i,x,num;
	printf("How many numbers: ");
	scanf("%d", &x);
	for(i=0;i<x;i++){
		printf("What should be the %d number?: ", i);
		scanf("%d", &num);
		Push(num);
}

};
