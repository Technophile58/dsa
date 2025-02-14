#include <iostream>
#include <algorithm> // Required for reverse()
#include <cstring>   // Required for strlen()
using namespace std;

int main() {
    char str[] = "HEll"; 

    reverse(str, str + strlen(str)); 

    cout << str << endl; 

    return 0;
}
