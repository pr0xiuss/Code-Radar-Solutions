#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }
    qsort(arr,n,sizeof(int),compare);
    printf("%d",arr[n-2]);
    return 0;
}