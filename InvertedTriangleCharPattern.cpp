#include <iostream>
using namespace std;
int main() {

    int n = 4;

    char ch = 'A';

    for(int i=0; i < n; i++) {

        // spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // chars
        for(int j = 0; j < n - i; j++) {
                cout << ch;
            }
            cout << endl;

            ch++;
    }
    return 0;
}