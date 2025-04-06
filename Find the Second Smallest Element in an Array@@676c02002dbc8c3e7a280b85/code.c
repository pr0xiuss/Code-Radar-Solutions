#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return(*(int *)a-*(int *)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int res=-1;
    int first=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            res=arr[i];
            break;
        }
    }
    printf("%d",res);
    return 0;
}