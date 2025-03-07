#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int start=-1,end=-1;
 
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            start=i;
            break;
        }
    }

    if (start == -1) return 0;
    for (int i=n-1;i>0;i--){
        if (arr[i]<arr[i-1]){
            end=i;
            break;
        }
    }
    int minVal=arr[start], maxVal=arr[start];
    for (int i=start;i<=end;i++){
        if (arr[i]<minVal) minVal=arr[i];
        if (arr[i]>maxVal) maxVal=arr[i];
    }
    for (int i=0;i<start;i++){
        if (arr[i]>minVal){
            start=i;
            break;
        }
    }
    for (int i=n-1;i >end;i--){
        if (arr[i]<maxVal){
            end=i;
            break;
        }
    }

    return end-start+1;
}