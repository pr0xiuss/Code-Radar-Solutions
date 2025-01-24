#include <stdio.h>

int main() {
    int num;
    unsigned int binary=0,place=1;
    scanf("%d",&num);
    if (num==0){
        printf("0");
    }
    while (num>0){
        binary+=(num&1)*place;
        num=num>>1;
        place*=10;
    }
    printf("%u",binary);
    return 0;
}