#include <stdio.h>

void bubble(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    bubble(arr,n);
    if (k>n){
        return -1;
    }
    return arr[k-1];
    return 0;
}