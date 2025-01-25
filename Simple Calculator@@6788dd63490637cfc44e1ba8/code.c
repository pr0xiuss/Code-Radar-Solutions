#include <stdio.h>

int main() {
    long int x,y;
    char op;
    scanf("%d %d %c",&x,&y,&op);
    switch (op){
        case '+':
            printf("%d",x+y);
            break;
        case '-':
            printf("%d",x-y);
            break;
        case '*':
            printf("ld",x*y);
            break;
        case '/':
            printf("%d",x/y);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}