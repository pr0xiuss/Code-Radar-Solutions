#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return(*(int *)a-*(int *)b);
}
int nums(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),compare);
    int max1=arr[n-1],max2=arr[n-2];
    int p=max1*max2;
    printf("%d",p);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n]
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int x=abs(arr[i]);
        temp[1]=x;
    }
    nums(temp[n]);
    return 0;
}