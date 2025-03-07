#include <stdio.h>
int findUnsoretedSubarray(int arr[],int n){
    int start=-1,end=-1;
    for (int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            start=i;
            break;
        }
    }
    if (start==-1) return 0;
    for (int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            end=i;
            break;
        }
    }
}