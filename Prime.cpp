#include <iostream>
using namespace std;
int main() {
    int n, i, flag = 0;
    cin >> n;
    if (n <= 1) flag = 1;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}
