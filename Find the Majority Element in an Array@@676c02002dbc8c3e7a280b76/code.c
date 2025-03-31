#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[100] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; 
    }
    int el=0,c;
    for (int i = 0; i < n; i++) {
        if (freq[i]>el){
            el=freq[i];
            c=i;
        }
        if(c>n/2) printf("%d",c);
            else printf("-1");
    }
    return 0;
}