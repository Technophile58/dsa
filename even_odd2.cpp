#include <iostream>
using namespace std;

void firstEven(int arr[], int n, int &ansIndex) {
    int s = 0, e = n - 1;
    ansIndex = -1; // Reset index
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (arr[mid] % 2 == 0) { 
            ansIndex = mid;  // Store the answer
            e = mid - 1;  // Move left to find the first occurrence
        } else {
            s = mid + 1;
        }
    }
}

void lastEven(int arr[], int n, int &ansIndex) {
    int s = 0, e = n - 1;
    ansIndex = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] % 2 == 0) { 
            ansIndex = mid;
            s = mid + 1;  // Move right to find the last occurrence
        } else {
            e = mid - 1;
        }
    }
}

void firstOdd(int arr[], int n, int &ansIndex) {
    int s = 0, e = n - 1;
    ansIndex = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] % 2 != 0) { 
            ansIndex = mid;
            e = mid - 1;  // Move left to find the first occurrence
        } else {
            s = mid + 1;
        }
    }
}

void lastOdd(int arr[], int n, int &ansIndex) {
    int s = 0, e = n - 1;
    ansIndex = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] % 2 != 0) { 
            ansIndex = mid;
            s = mid + 1;  // Move right to find the last occurrence
        } else {
            e = mid - 1;
        }
    }
}

int main() {
    int arr[] = {2, 4, 4, 5, 5, 6, 6, 6, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int firstEvenIndex, lastEvenIndex;
    int firstOddIndex, lastOddIndex;

    firstEven(arr, size, firstEvenIndex);
    cout << "First even number is at index " << firstEvenIndex << endl;

    lastEven(arr, size, lastEvenIndex);
    cout << "Last even number is at index " << lastEvenIndex << endl;

    firstOdd(arr, size, firstOddIndex);
    cout << "First odd number is at index " << firstOddIndex << endl;

    lastOdd(arr, size, lastOddIndex);
    cout << "Last odd number is at index " << lastOddIndex << endl;

    return 0;
}
