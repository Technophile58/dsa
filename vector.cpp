#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> arr(n);
    // vector<int> arr;

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++) {
    //     int temp;

    
    //     cin >> temp;
    //     arr.push_back(temp);
    // }

    cout << "Printing the elements:\n";
    
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
