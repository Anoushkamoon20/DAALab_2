#include <stdio.h>
int sumArray(int arr[], int n) {
    if (n <= 0) 
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1); 
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr, n);
    printf("The sum of the array elements is: %d\n", result);

    return 0;
}
