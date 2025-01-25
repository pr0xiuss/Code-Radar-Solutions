#include <stdio.h>

int main() {
    int x,y=0;
    scanf("%d",&x);
    for (i=x;i>=0;i--){
        y+=1;
        for (j=1;<=i;++j){
            print("* ");
        }
        printf("\n");
    }
    return 0;
}