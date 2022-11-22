# include <stdio.h>

int firstBadVersion(int n, int bad, int i){
	if(i<bad){
		return 0;
}
	if(i>bad){
		return 1;
}
	return -1;


};


int main(){
	int bad = 0;
	int i = 0;
	int n =0;
	scanf("n = %d, bad = %d",&n ,&bad);	
	printf("\n");
	scanf("%d",&i);
	int badversion = firstBadVersion(n, bad, i);
	printf("This version is(0 = not bad, 1 = bad)%d",badversion);
}
