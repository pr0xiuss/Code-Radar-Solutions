#include <stdio.h>
int factorialRange(int start,int end){
    int fact=1;
    scanf("%d",&start);
    scanf("%d",&end);
    
    for(int i=start;i<=end;i++){
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
    return 0;
}