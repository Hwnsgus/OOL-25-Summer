#include <iostream>
using namespace std;

class Rect {
private:
    int width, height;

public:
    Rect(int a, int b) : width(a), height(b) {};

    int area() const {
        return width* height;
    }

    void setWidth(int a) {
        if (a<0)
        {
            width = 0;
        }
        else {
            width = a;
        }
    }

    void setHeight(int b) {
        if (b < 0)
        {
            height = 0;
        }
        else {
            height = b;
        }
    }
};

int main() {
    Rect r(3, 4);
    cout << r.area() << "\n"; // 12
    r.setWidth(-5); r.setHeight(2);
    cout << r.area() << "\n"; // 0
}