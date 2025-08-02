#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i=0; i < n; i++) {
        for(int j = 0; j < i+1; j++) { // if i write cout << (i + 1) 1,2 2,3 3 3, so on ...
            cout << (i + 1) << " ";    // // if i write cout << (j + 1) 1,1 2,1 2 3 so on ...
        }
        cout << endl;
    }
    return 0;
}