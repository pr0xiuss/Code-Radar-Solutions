#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int miss=1;
    for(int i=;i<n;i++){
        if (arr[i]==miss){
            miss++;
        }
    }
    printf("%d",miss);
    return 0;
}