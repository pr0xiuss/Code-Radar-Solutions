int mostPlayedGame(int games[],int n){
    int hash[100]={0};
    for(int i=0;i<n;i++){
        hash[games[i]]++;
    }
    int el=-1,maxf=0;
    for(int i=0;i<100;i++){
        if (hash[i]>maxf){
            maxf=hash[i];
            el=i;
        }
    }
    return el;
    return 0;
}