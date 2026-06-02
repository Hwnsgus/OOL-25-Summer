#include <iostream>
#include <string>
using namespace std;

// 여기에 답안을 작성해주세요. (template을 이용할 것)
template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << get_max(10, 20) << "\n";            // 20
    cout << get_max(3.14, 2.71) << "\n";        // 3.14
    string s1 = "Apple", s2 = "Banana";
    cout << get_max(s1, s2) << "\n";            // Banana
}