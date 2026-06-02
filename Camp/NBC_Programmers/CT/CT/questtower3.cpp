#include <iostream>
using namespace std;

int main() {
    double r;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    
    cout << r * r * 3.141592 << endl;
    return 0;   
}
