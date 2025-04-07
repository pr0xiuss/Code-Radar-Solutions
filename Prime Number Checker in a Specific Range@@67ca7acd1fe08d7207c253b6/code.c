int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i<=1) continue;
        for(int j=2;j*j<=i;j++){
            if(i%j==0) return 0;
        }
        printf("%d ",i);
    }
    return 0;
}