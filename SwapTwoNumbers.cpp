#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b;
    return 0;
}
