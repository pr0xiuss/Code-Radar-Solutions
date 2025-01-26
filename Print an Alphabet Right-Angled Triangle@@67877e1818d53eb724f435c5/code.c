#include <stdio.h>

int main() {
    int num;
    char al="A";
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        al="A";
        for (int j=1;j<=i;j++){
            printf("%c",al);
            al++;
        }
        printf("\n");
    }
    return 0;
}