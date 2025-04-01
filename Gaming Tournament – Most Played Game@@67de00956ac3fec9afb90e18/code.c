int mostPlayedGame(int games[],int n){
    int hash[100];
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int el=-1,maxf=0;
    for(int i=0;i<100;i++){
        if (hash[i]>maxf){
            maxf=freq[i];
            el=i;
        }
    }
    return maxf;
    return 0;
}