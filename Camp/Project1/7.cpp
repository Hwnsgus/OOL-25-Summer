#include <iostream>
using namespace std;

class IntPtr {
    int* ptr;
public:
    IntPtr(int val) {
        ptr = new int(val);
    }

    ~IntPtr() {
        // 여기에 소멸자 로직을 작성해주세요.

        delete ptr;
    }

    IntPtr(const IntPtr& other) {
        // 여기에 복사 생성자 로직을 작성해주세요.
        ptr = new int(*(other.ptr));
    }

    int getValue() const {
        return *ptr;
    }
};

int main() {
    IntPtr p1(10);
    IntPtr p2 = p1; // 복사 생성자 호출

    cout << p1.getValue() << "\n"; // 10
    cout << p2.getValue() << "\n"; // 10
}