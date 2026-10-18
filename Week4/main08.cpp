#include <iostream>
using namespace std;

class R {
    int i;
    const int j;
    int &ref;

    public:
    R(int);
};
R::R(int x): i(x), j(x), ref(i) {
    cout << "i: " << i << ", j: " << j << ", ref: " << ref << endl;
}

int main() {
    
    R r1(10);
    
    return 0;
}