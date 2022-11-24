# include <stdio.h>
# include <stdlib.h>

char* cars(int x1, int v1, int x2, int v2) {
    char *yes = (char*)malloc(3*sizeof(char));
    char *no = (char*)malloc(2*sizeof(char));
    int i;
    int car1 = 0;
    int car2 = 0;
    yes[0] = 'Y';
    yes[1] = 'E';
    yes[2] = 'S';
    no[0] = 'N';
    no[1] = 'O';
    printf("X1 %d, V1: %d, X2: %d, V2: %d", x1, v1, x2, v2);
    if(v1 >= v2 && x1 > x2){
        return no;
    }
    if(v2 >= v1 && x2 > x1){
        return no;
    }
    if(x1 == x2){
        return yes;
    }
    if(v1 > v2){
        for(i=0; car1<car2; i++){
            car1 = (v1*i) + x1;
            car2  = (v2*i) + x2;
            if(car1 == car2){
                return yes;
            }
        }
    }
    if(v2 > v1){
        for(i=0; car2>car1; i++){
            car1 = (x1*i) + x1;
            car2  = (x2*i) + x2;
            if(car1 == car2){
                return yes;
            }
        }
        return no;
    }
    return yes;
}



int main(){
    int x1 = 0;
    int v1 = 0;
    int x2 = 0;
    int v2 = 0;
    printf("Type in the first car's position and speed and the second car's position and speed as shown(x1, v1, x2, v2)\n");
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    printf("\n");
    char *result = cars(x1, v1, x2, v2);
    if(result[0] == 'Y'){
        printf("\nYES\n");
    }
    if(result[0] == 'N'){
        printf("\nNO\n");
    }
    
};