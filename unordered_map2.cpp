#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countPairs(vector<int>& arr, int target) {
    unordered_map<int, int> m;
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        int com = target - arr[i];

        
        if (m.find(com) != m.end()) {
            count += m[com];
            // cout<<count<<" ";
        }

        m[arr[i]]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;
    cout << "Count of pairs: " << countPairs(arr, target) << endl;
    return 0;
}
