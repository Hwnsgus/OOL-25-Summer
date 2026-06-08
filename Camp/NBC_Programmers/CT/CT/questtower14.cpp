#include <iostream>
using namespace std;

int main() {
    int W, H;
    cin >> W >> H;

    int cir = 2 * (W+H);
    int ext = W*H;

    cout << cir << endl;
    cout << ext << endl;

}
