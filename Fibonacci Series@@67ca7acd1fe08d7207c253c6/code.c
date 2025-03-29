int fibonacciSeries(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    else{
        fib=fibonacciSeries(n-1)+fibonacciSeries(n-2);
        for (i<0;i<n;i++){
            return fibonacciSeries(i);
        }

    }
    printf("\n");
}

