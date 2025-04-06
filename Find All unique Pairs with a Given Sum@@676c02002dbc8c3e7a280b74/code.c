#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n],hash[101]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]+50]++;
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        int x=arr[i];
        int y=k-x;
        if(x<=y && hash[x+50]>0 && hash[y+50]>0){
            if(x==y && hash[x+50]<2) continue;
            printf("%d %d\n",x,y);
            hash[x+50]=0;
            hash[y+50]=0;
        }
    }
    return 0;
}