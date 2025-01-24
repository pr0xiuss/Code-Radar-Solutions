#include <stdio.h>

void dtob(int num){
    int binary[32];
    int i=0;
    while (num>0){
        binary[i++]=num&1;
        num=num>>1;
    }
    for (int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}
int main() {
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}