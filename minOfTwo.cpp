#include <iostream>
using namespace std;

// sum of 2 number
double sum(double a, double b) {  //parameters
    double s = a + b;
    return s;
}

//min of 2 nums
double minOfTwo(double a, double b) {
    if(a < b) {
        return a;

    } else {
        return b;
    }
}

int main() {
    cout << "min = " << minOfTwo(5, 3) << endl;  //arguments

    return 0;
}