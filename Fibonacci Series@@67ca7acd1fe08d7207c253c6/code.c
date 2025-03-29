int fibonacciSeries(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    else{
        for (int i=0;i<n;i++){
            printf(fibonacciSeries(i));
        }

    }
    printf("\n");
}

