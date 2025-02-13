#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "One";
    m[3] = "Three";
    m[2] = "Two";

    cout << "Key 2 has value: " << m[2] << endl;

    for (auto& pair : m) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    map<int, int> m1;
    m1[1] = 1;
    m1[3] = 3;
    m1[2] = 2;

    cout << "Key 2 has value: " << m1[2] << endl;

    for (auto& pair : m1) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

cout<<endl;
    

    map<string, int> m2;
    m2["One"] = 1;
    m2["Three"] = 3;
    m2["Two"] = 2;


    cout << "Key 'Two' has value: " << m2["Two"] << endl;

    for (auto& pair : m2) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;

    
    map<string, char> m3;
    m3["One"] = '1';
    m3["Three"] = '3';
    m3["Two"] = '2';

    
    cout << "Key 'Two' has value: " << m3["Two"] << endl;

    for (auto& pair : m3) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    cout << endl;



    
}


