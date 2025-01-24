#include <stdio.h>

int main() {
    int num,binary=0,place=1;
    scanf("%d",&num);
    while (num>0){
        binary+=(num&1)*place;
        num=num>>1;
        place*=10;
    }
    printf("5d",binary);
    return 0;
}