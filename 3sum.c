#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);  
    int arr[n];
    int target;
    printf("Enter the value of target\n");
    scanf("%d", &target);  

printf("Enter the elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            for(int k=j+1;k<n;k++){

            if (arr[i] + arr[j] + arr[k] == target) {
                printf("(%d, %d , %d)\n", arr[i], arr[j],arr[k]);  
            }
            }
        }
    }

    return 0;
}
