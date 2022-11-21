# include <stdio.h>

int main(){
	int a[] = {2, 3, 13,21, 36, 47, 63, 81, 97};
	int size = sizeof(a)/sizeof(int);
	printf("Size: %d", size);
	int i;
	int target = 81;
	for(i=0;i<size;i++){
		if(a[i] == target){
			printf("Found the number: %d", target);
}
}
	
	
	
	
	
}
