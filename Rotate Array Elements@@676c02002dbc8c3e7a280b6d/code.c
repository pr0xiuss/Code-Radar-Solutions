#include <stdio.h>

void rotate_array(int arr[], int n, int k) {
    k = k % n;  // In case k is larger than the array length
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int n, k;
    
    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Define a fixed-size array with a maximum size
    #define MAX_SIZE 1000
    int arr[MAX_SIZE];
    
    // Ensure n does not exceed MAX_SIZE
    if (n > MAX_SIZE) {
        return 1;
    }
    
    // Read the array elements from n lines of input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the number of steps to rotate

    scanf("%d", &k);
    
    // Rotate the array
    rotate_array(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    
    return 0;
}