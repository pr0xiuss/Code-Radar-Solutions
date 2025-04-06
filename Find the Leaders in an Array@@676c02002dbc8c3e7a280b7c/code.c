#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n],l=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    
    }
    int max=arr[n-1];
    temp[l++]=max;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            temp[l++]=max;
        }
    }
    for(int i=l-1;i>=0;i--){
        printf("%d ",temp[i]);
    }
    return 0;
}