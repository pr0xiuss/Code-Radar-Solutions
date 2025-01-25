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
            if (y==0||x==0){
                printf("error");
            }else{
                printf("%ld",x/y);
            }
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}