// C++ implementation of the above approach
#include <iostream>
using namespace std;

// Function to find minimum number of eliminations
// such that sum of all adjacent elements is even
int min_elimination(int n, int arr[])
{
	int countOdd = 0;

	// Stores the new value
	for (int i = 0; i < n; i++)

		// Count odd numbers
		if (arr[i] % 2)
			countOdd++;

	// Return the minimum of even and
	// odd count
	return min(countOdd, n - countOdd);
}


int main()
{
	int arr[] = { 1, 2, 3, 7, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << min_elimination(n, arr);

	return 0;
}
