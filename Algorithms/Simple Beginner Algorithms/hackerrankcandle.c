int birthdayCakeCandles(int candles_count, int* candles) {
    int i, j;
    int count =0;
    int *arr = malloc(candles_count*sizeof(int));
    arr = candles;
    for(i=1;i<candles_count;++i) {
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    int temp = arr[0];
    for(i=0;i<candles_count;i++){
        if(candles[i] == temp){
            count++;
        }
    }
