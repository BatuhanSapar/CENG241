#include <iostream>
using namespace std;

class CreateDestroy {
    public:
    CreateDestroy() {
        cout << "Constructor called!" << endl;
    }
    ~CreateDestroy() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    CreateDestroy obj1;

    CreateDestroy arr[3];
}