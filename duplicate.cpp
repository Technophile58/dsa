#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> arr = {0,0,0,0,1, 2, 3, 4, 5, 2, 3, 6, 7, 3};
    unordered_map<int, int> freqMap;
    vector<int> duplicates;

    
    for (int num : arr) {
        freqMap[num]++;
    }

    
    for (auto& pair : freqMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }


    return 0;
}
