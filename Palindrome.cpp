#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cin >> n;
    original = n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome";

    return 0;
}
