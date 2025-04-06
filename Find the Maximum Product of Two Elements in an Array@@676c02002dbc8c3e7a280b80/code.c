#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return(*(int *)a-*(int *)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp[i]=abs(arr[i]);
    }
    qsort(temp,n,sizeof(int),compare);
    int max1=temp[n-1];
    int i=n-2;
    while(i>=0 && temp[i]==max1){
        i--;
    }
    if(i>=0){
        int max2=temp[i];
        printf("%d",max1*max2);
    }else{
        printf("%d",max1);
    }
    return 0;
}