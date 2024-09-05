#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;
     // Check if the operator is valid
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Error! Operator is not correct" << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    // Check if the input is valid
    if (cin.fail()) {
        cout << "Error! Invalid operands" << endl;
        return 1; // Exit the program with an error code
    }

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Operator is not correct";
            break;
    }

    return 0;
}
