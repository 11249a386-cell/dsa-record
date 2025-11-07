#include <stdio.h>

int main() {
    int n, target, i, found = 0;

    // Ask user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Create array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d (index %d)\n", target, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
