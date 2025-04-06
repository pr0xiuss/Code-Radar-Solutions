#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n],hash[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]=1;
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        int x=arr[i];
        int y=k-x;
        if(hash[x] && hash[y] && x<=y){
            printf("%d %d\n",x,y);
            hash[x]=hash[y]=0;
        }
    }
    return 0;
}