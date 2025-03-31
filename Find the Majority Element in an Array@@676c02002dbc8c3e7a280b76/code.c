#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[100] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; 
    }
    int el=-1,maxf=0;
    for (int i = 0; i < 100; i++) {
        if (freq[i]>maxf){
            maxf=freq[i];
            el=i;
        }
    }
    if(maxf>n/2) printf("%d",c);
    else printf("-1");
    return 0;
}