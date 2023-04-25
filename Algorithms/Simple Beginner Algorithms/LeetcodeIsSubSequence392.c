bool isSubsequence(char * s, char * t){
    int track = 0;
    int i;
    for(i=0;i<strlen(t);i++){
        if(t[i] == s[track]){
            track++;
        }
    }

    if(track == strlen(s)){
        return true;
    }
   



    return false;
}
