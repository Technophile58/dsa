#include <iostream>

using namespace std;

// Picked number (must be set to guarantee 3 iterations)
int pick = 55; // Adjusted to ensure 3 steps

// Function to simulate the guessing API
int guess1(int num) {
    if (num > pick) return -1;
    if (num < pick) return 1;
    return 0;
}

// Function to perform binary search within exactly 3 iterations
int guessNumber(int n) {
    int s = 1, e = n, mid;

    for (int i = 0; i < 3; i++) {  // Ensure exactly 3 iterations
        mid = s + (e - s) / 2;
        cout << "Checking number: " << mid << endl; 
        int res = guess1(mid);

        if (res == 0) {
            cout << "Number found: " << mid << endl;
            return mid;
        }
        if (res == -1) {
            cout << mid << " is too high, searching in left half.\n";
            e = mid - 1;
        } else {
            cout << mid << " is too low, searching in right half.\n";
            s = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int n = 100;  // Set range to ensure 3 steps

    cout << "Picked number: " << pick << endl;
    int result = guessNumber(n);
    cout << "Guessed number: " << result << endl;

    return 0;
}
