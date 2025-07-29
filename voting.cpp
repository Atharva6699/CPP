#include <iostream>
using namespace std;

int main() {
    int age;
    cout << ("Enter your age:");
    cin >> (age);
    
    if (age >= 18) {
        cout << ("You are eligible for voting\n");
        cin >> (age);
    } else{
        cout << ("You are not eligible for voting\n");
        cin >> (age);
}    
    
    return 0;
}