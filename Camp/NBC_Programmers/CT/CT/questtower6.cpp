#include <iostream>
using namespace std;

int main() {

    int ATK, DEF;
    double MUL;
    double total = 0;

    cin >> ATK >> MUL >> DEF;

    total = ATK * MUL - DEF;


    cout << fixed;
    cout.precision(2);

    cout << total << endl;


    return 0;
}
