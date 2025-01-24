#include <stdio.h>

void dtob(int num){
    int mask=1<<31;
    int led=1;
    for(int i=0;i<32;i++){
        if ((num&mask)!=0){
            led=0;
        }
        if (!led){
            printf("%d",(num&mask)?1:0);
        }
        mask>>1;
    }
}

int main() {
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}