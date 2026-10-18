#include <iostream>
using namespace std;

class Lecturer {
    int courseID;
    string name;

    public:
    Lecturer();
    Lecturer(int, string);
    void display() {cout << "ID: " << courseID << ", Name: " << name << endl;}
};
Lecturer::Lecturer() {
    courseID = 0;
    name = "Unknown";
}
Lecturer::Lecturer(int i, string n) {
    courseID = i;
    name = n;
}

int main() {
    Lecturer l1;
    l1.display();
    Lecturer l2(241, "Arda S.");
    l2.display();

    return 0;
}