#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};  // Original array
    int arr2[] = {2, 1, 3, 2, 5};  // One number replaced

    int n = sizeof(arr1) / sizeof(arr1[0]); // Number of elements

    int sum1 = 0, sum2 = 0, sumSq1 = 0, sumSq2 = 0;

    // Compute sum and sum of squares for both arrays
    for (int i = 0; i < n; i++) {
        sum1 += arr1[i];            // Sum of arr1
        sumSq1 += arr1[i] * arr1[i]; // Sum of squares of arr1
        sum2 += arr2[i];            // Sum of arr2
        sumSq2 += arr2[i] * arr2[i]; // Sum of squares of arr2
    }

    int sum_diff = sum1 - sum2;    // X - Y
    int sq_sum_diff = sumSq1 - sumSq2;  // X^2 - Y^2

    int sum_XY = sq_sum_diff / sum_diff; // X + Y

    int missing = (sum_XY + sum_diff) / 2; // Solving for X

    cout << "Missing number: " << missing << endl;

    return 0;
}
