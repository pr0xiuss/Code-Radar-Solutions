#include <stdio.h>

void dtob(int num){
    int binary[32];
    int i=0;
    while (n>0){
        binary[i++]=n&1;
        n=n>>1;
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