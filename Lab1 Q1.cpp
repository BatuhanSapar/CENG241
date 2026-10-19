
#include <iostream>
#include <cstdlib>
using namespace std;

namespace Math {

    class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        double add(double a, double b) {
            return a + b;
        }

        int subtract(int a, int b) {
            return a - b;
        }

        double subtract(double a, double b) {
            return a - b;
        }

        int multiply(int a, int b) {
            return a * b;
        }

        double multiply(double a, double b) {
            return a * b;
        }

        int divide(int a, int b) {
            if (b == 0) {
                cout << "Division by zero error!" << endl;
                exit(1);
            }
            return a / b;
        }

        double divide(double a, double b) {
            if (b == 0.0) {
                cout << "Division by zero error!" << endl;
                exit(1);
            }
            return a / b;
        }
    };

}

int main() {

    Math::Calculator calc;

    int num1, num2;
    double dnum1, dnum2;
    char intOperator, doubleOperator;

    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;

    cout << "Enter two double numbers: ";
    cin >> dnum1 >> dnum2;

    cout << "Enter the desired operation to perform on integer numbers: ";
    cin >> intOperator;

    cout << "Enter the desired operation to perform on double numbers: ";
    cin >> doubleOperator;

    cout << "\nResults of the operations:" << endl;

    switch (intOperator) {
        case '+':
            cout << "Addition of " << num1 << " and "
                 << num2 << " is: "
                 << calc.add(num1, num2) << endl;
            break;

        case '-':
            cout << "Subtraction of " << num1 << " from "
                 << num2 << " is: "
                 << calc.subtract(num1, num2) << endl;
            break;

        case '*':
            cout << "Multiplication of " << num1 << " and "
                 << num2 << " is: "
                 << calc.multiply(num1, num2) << endl;
            break;

        case '/':
            cout << "Division of " << num1 << " by "
                 << num2 << " is: "
                 << calc.divide(num1, num2) << endl;
            break;

        default:
            cout << "Invalid integer operator!" << endl;
    }

    switch (doubleOperator) {
        case '+':
            cout << "Addition of " << dnum1 << " and "
                 << dnum2 << " is: "
                 << calc.add(dnum1, dnum2) << endl;
            break;

        case '-':
            cout << "Subtraction of " << dnum1 << " from "
                 << dnum2 << " is: "
                 << calc.subtract(dnum1, dnum2) << endl;
            break;

        case '*':
            cout << "Multiplication of " << dnum1 << " and "
                 << dnum2 << " is: "
                 << calc.multiply(dnum1, dnum2) << endl;
            break;

        case '/':
            cout << "Division of " << dnum1 << " by "
                 << dnum2 << " is: "
                 << calc.divide(dnum1, dnum2) << endl;
            break;

        default:
            cout << "Invalid double operator!" << endl;
    }

    return 0;
}
