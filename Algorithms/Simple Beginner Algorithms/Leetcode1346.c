bool checkIfExist(int* arr, int arrSize){
    int i;
    int j;
    for(i=0;i<arrSize;i++){
        for(j=0;j<arrSize;j++){
            if(arr[j] == 2*arr[i] && j!=i){
                return true;
            }
            if(arr[j]*2 == arr[i] && j!=i){
                return true;
            }
        }
    }
    return false;
}
