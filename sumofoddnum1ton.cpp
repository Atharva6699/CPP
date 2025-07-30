#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int oddsum = 0;
    for(int i = 1; i <= n; i++) {
        if (i %2 != 0) {
            cout << i << endl;
            oddsum += i;
         }
    }
    cout << "sum of odd numbers from 1 to " << n << " is: " << oddsum << endl;
    return 0;
}