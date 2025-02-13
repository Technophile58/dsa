#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Correct way to add a new row
    vec.push_back({10, 11, 12});

    // printing 2d array
    for(const auto &row:vec){
        for(int val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    

    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vec1.push_back(10);
    vec1.push_back(11);
    vec1.push_back(12);

//range based for loop
    for (const auto &val : vec1) {
        cout << val << " ";
    }
    cout << endl;
    
    
    vector<string>words={"apple","banana","cherry"};
    for (const auto &val : words) {
        cout << val << " ";
    }
    cout << endl;


    // for ( auto &val : words) {
    //     cout << val << " ";
    // }
    // cout << endl;

    // for ( string &val : words) {
    //     cout << val << " ";
    // }
    // cout << endl;



    //modify the element
    for(auto&word:words){
        word+="!";
    }

    for(const auto&word:words){
        cout<<word<<" ";
    }
    
}
