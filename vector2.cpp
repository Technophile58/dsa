#include<iostream>
#include<vector>
#include<map>
using namespace std;

void printVector(const vector<int> &vec){
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
}

void printVector1(vector<int> &vec){  
    for(auto &val : vec){  
        val = val + 2;  
        cout << val << " ";
    }
    cout << endl;
}
void printMap(const map<int,string>&m){  
    for (auto& pair : m) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);  
    printVector1(vec); 
    printVector(vec);
    
    map<int,string>m;

    m[1]="One";
    m[2]="Two";
    m[3]="Three";
    printMap(m);
    return 0;
}
