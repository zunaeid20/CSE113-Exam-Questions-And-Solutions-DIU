//Reversing a one dimensional array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    //If the number of elements were not given we had to find that using sizeof function: int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) { //Look here
        int temp = arr[i]; //Look here
        arr[i] = arr[n - 1 - i]; //Look here
        arr[n - 1 - i] = temp; //Look here
    }
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
