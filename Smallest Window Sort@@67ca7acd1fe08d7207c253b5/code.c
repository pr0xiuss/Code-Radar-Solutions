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
    int minval=arr[start],maxval=arr[start];
    for (int i=start;i<=end;i++){
        if (arr[i]<minval) minval=arr[i];
        if (arr[i]>maxval) maxval=arr[i];
    }
    for (int i=0;i<start;i++){
        if(arr[i]>minval){
            start=i;
            break;
        }
    }
    for(int i=n-1;i>end;i--){
        if (arr[i]<maxval){
            end=i;
            break;
        }
    }
    return end-start+1;
}