#include <stdio.h>

int main(){
    long int x,y;
    char op;
    scanf("%ld %ld %c",&x,&y,&op);
    switch (op){
        case '+':
            printf("%ld",x+y);
            break;
        case '-':
            printf("%ld",x-y);
            break;
        case '*':
            printf("ld",x*y);
            break;
        case '/':
            if (y==0){
                printf("Error");
            }else{
                printf("%ld",x/y);
            }
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}