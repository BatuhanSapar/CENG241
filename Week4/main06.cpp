#include <iostream>
using namespace std;

class S {
    int x, y;

    public:
    S(int a, int b): x(a), y(b) {}
    int getX() {return x;}
    int getY() {return y;}
};

int main() {
    S s1(2, 3);
    cout << "X: " << s1.getX() << ", Y: " << s1.getY() << endl;

    return 0;
}