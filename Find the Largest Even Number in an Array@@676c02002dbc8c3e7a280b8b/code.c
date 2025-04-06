#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],even[n],e=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[e++]=arr[i];
        }
    }
    int max=-1;
    for(int i=0;i<e;i++){
        if(even[i]>max) max=even[i];
    }
    printf("%d",even[i]);
    return 0;
}