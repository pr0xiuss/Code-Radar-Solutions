#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
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
    int first=arr[0];
    int res=-1;
    for (int i=0;i<n;i++){
        if (arr[i]<first){
            res=arr[i];
            break;
        }
    }
    printf("%d",res);
    return 0;
}