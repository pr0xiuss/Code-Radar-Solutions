#include <stdio.h>

int cc(int num){
    if (num==0){
        return 32;
    }
    int c=0;
    while ((num&1)==0){
        c++;
        num>>=1;
    }
    return c;
}

int main() {
    int num;
    scanf("%d",&num);
    printf("%d",cc(num));
    return 0;
}