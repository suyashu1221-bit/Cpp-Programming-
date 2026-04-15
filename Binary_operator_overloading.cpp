#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {}

    A(int i) {
        x = i;
    }

    void operator+(A a) {
        int m = x + a.x;
        cout << "The result of addition is: " << m;
    }
};

int main() {
    A a1(5), a2(4);
    a1 + a2;
    return 0;
}