#include <iostream>
using namespace std;

class DynamicArray {
    int *p1;
    
    public:
    DynamicArray(int size) {
        p1 = new int[size];
        cout << "Integer array constructed with size: " << size << endl;
}
    
    ~DynamicArray() {
        delete []p1;
        cout << "Integer array destructed!" << endl;
    }
};

int main() {
    DynamicArray obj(5);

    return 0;
}