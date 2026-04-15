#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

// Rectangle class
class Rectangle : public Shape {
private:
    float length, width;

public:
    void getData() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void area() {
        cout << "Area of rectangle = " << length * width << endl;
    }

    void perimeter() {
        cout << "Perimeter of rectangle = " << 2 * (length + width) << endl;
    }
};

// Circle class
class Circle : public Shape {
private:
    float radius;

public:
    void getData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of circle = " << 3.1416 * radius * radius << endl;
    }

    void perimeter() {
        cout << "Perimeter of circle = " << 2 * 3.1416 * radius << endl;
    }
};

int main() {
    Rectangle rect;
    Circle circ;

    cout << "--- Rectangle ---\n";
    rect.getData();
    rect.area();
    rect.perimeter();

    cout << "\n--- Circle ---\n";
    circ.getData();
    circ.area();
    circ.perimeter();

    return 0;
}