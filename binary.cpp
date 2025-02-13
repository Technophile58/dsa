#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        } 
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found" << endl; 
    return 0;
}
