#include <stdio.h>

int main() {
    double x,y;
    char op;
    scanf("%lf %lf %c",&x,&y,&op);
    switch (op){
        case '+':
            printf("%.2lf",x+y);
            break;
        case '-':
            printf("%.2lf",x-y);
            break;
        case '*':
            printf("%.2lf",x*y);
            break;
        case '/':
            printf("%.2lf",x/y);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}