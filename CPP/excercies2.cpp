#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
public:
    double x;
    double y;

    // constructor
    Point2D(double a = 0, double b = 0) {
        x = a;
        y = b;
    }

    void set(double a, double b) {
        x = a;
        y = b;
    }

    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }

    double distanceFrom(Point2D other) {
        return sqrt((x - other.x) * (x - other.x) +
                    (y - other.y) * (y - other.y));
    }

    void translate(double dx, double dy) {
        x = x + dx;
        y = y + dy;
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point2D p1(3, 4);
    Point2D p2(6, 8);

    cout << "Point 1: ";
    p1.print();

    cout << "Point 2: ";
    p2.print();

    cout << "Distance of p1 from origin: "
         << p1.distanceFromOrigin() << endl;

    cout << "Distance between p1 and p2: "
         << p1.distanceFrom(p2) << endl;

    p1.translate(1, 2);
    cout << "After translating p1: ";
    p1.print();

    return 0;
}

