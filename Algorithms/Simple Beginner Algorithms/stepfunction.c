void staircase(int n) {
    int i, j;
    char hash[n][n];
    for(i=0;i<n;i++){
        hash[0][i] = '#';
        for(j=0;j<=i;j++){
            printf("%c", hash[0][i]);
        }
        printf("\n");
    }
