#include <stdio.h>

int main() {
    int x,y,p,l;
    scanf("%d %d",&x,&y);
    p=x-y;
    l=y-x;
    if (p>0){
        printf("Profit");
    }else if(l>0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}