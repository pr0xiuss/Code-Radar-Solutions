#include <stdio.h>
int main(){
    int n,maxn,minn;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxn=arr[0];
    minn=arr[0];
    for(int i=0<i<n;i++){
        if(arr[i]>maxn) maxn=arr[i];
        if (arr[i]<minn) minn=arr[i];
    }
    printf("%d %d",minn,maxn);
    return 0;
}