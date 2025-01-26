#include <stdio.h>

int main() {
    int num,p;
    scanf("%d",&num);
    for (int i=1;i<=10;i++){
        p=num*i;
        printf("%d x %d = %d\n",num,i,p);
    }
    return 0;
}