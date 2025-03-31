#include <stdio.h>
int main(){
    int n,maxn,minn;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        maxn=arr[i];
        minn=arr[i];
        for (int j=i;j<n;j++){
            if(arr[j]>maxn){
                maxn=arr[j];
            }
            if (arr[j]<minn){
                minn=arr[j];
            }
        }
    }
    printf("%d %d",max,minn);
    return 0;
}