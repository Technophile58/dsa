#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    
    if (n == 0) 
        return 1;

    
    return 2 * powerOfTwo(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << "2^" << n << " = " << powerOfTwo(n) << endl;

    return 0;
}
