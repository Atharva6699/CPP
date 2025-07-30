#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks:";
    cin >> marks;
    if (marks >= 90) {
        cout << "you got A grade" << endl;
        cin >> marks;

    } else if (marks >= 80 && marks < 90) {
        cout << "you got B grade" << endl;
    cin >> marks;
       } else {
        cout << "you got C grade" << endl;
        cin >> marks;
       }
       return 0;

}