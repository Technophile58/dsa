#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int ansIndex = -1; 
    sort(arr, arr + n);  // Sort the array
    int s = 0, e = n - 1;
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;  // Update mid inside the loop
        int number = arr[mid];
        int index = mid;
        int diff = number - index;

        if (diff == 0) {
            s = mid + 1;  // Move to the right half
        } else if (diff == 1) {
            ansIndex = index;
            e = mid - 1;  // Move to the left half
        }
    }

    // if (ansIndex == -1) {
    //     return n;
    // }
    return ansIndex;
}

int main() {
    int arr[] = {0,1,2,3,5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = missingNumber(arr, n);
    cout << "Missing number: " << missing << endl;

    return 0;
}
