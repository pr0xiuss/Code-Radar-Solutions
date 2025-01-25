#include <stdio.h>

int main() {
    int cp,sp,p,l;
    scanf("%d %d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if (p>0){
        printf("Profit");
    }else if(l>0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}