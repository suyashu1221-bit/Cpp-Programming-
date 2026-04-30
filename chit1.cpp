#include <iostream>
using namespace std;

class Electricity {
    int units, rate;

public:
    // Constructor
    Electricity() {
        units = 100;
        rate = 5;
    }

    void display() {
        cout << "Total bill = " << units * rate << endl;
    }

    virtual void show() {
        cout << "Electricity bill" << endl;
    }
};

class Domestic : public Electricity {
public:
    void show() override {
        cout << "Domestic bill" << endl;
    }
};

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    Electricity e;
    e.display();

    Domestic d;

    Electricity* ptr = &d;  // Base pointer to derived object
    ptr->show();            // Calls overridden function (runtime polymorphism)

    cout << "Add: " << add(5, 6) << endl;

    return 0;
}