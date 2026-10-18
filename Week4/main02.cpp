#include <iostream>
using namespace std;

class Point {
    int x, y;

    public:
    Point(int, int);
    void display() {cout << "X: " << x << ", Y: " << y << endl;}
};
Point::Point(int a, int b) {
    x = a;
    y = b;
}

int main() {
    Point p(10, 20);
    p.display();
    
    return 0;
}