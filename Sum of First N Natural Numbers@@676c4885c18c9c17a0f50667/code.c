#include <stdio.h>

int main() {
    int num,s;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        s+=i;
    }
    printf("%d",s);
    return 0;
}