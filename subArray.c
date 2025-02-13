
#include <stdio.h>

int maxSubarraySum(int arr[], int size) {
    int maxSum = arr[0];
  
    
    for (int i = 0; i < size; i++) {
        int currSum = 0;

        for (int j = i; j < size; j++) {
            currSum = currSum + arr[j];
          
            
            if (currSum > maxSum) {
                maxSum = currSum;
            }
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxSubarraySum(arr, size));
    return 0;
}