#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0; // Flag to check if at least one triplet is found

    printf("Triplets with sum 0:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                    found = 1; 
                }
            }
        }
    }

    if (!found) {
        printf("No triplets found.\n");
    }

    return 0;
}
