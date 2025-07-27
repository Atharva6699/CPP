#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, digit;
    cin >> n;
    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, 5);
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}
