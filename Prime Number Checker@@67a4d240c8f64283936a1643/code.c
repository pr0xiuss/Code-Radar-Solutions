#include <stdio.h>

int isPrime(int num,int i){
    if (num<=1) return 0;
    if (i*i>num) return 1;
    if (num %2==0) return 0;
    return isPrime(num,2);
}