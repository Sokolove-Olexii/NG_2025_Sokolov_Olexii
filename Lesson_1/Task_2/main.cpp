#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, result;
    char operation;

    cout << "Base calculator operations:\n";
    cout << "+, -, *, /, ^, r";

    cout << "Type first number";
    cin >> a;

    cout << "Choose operation";
    cin >> operation;

    if (operation != 'r') {
        cout << "Type second number";
        cin >> b;
    }

    switch(operation) {
    case '+':
        result = a + b;
        cout << "Result of addition:" << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "Subtraction result:" << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "result of multiplication:" << result << endl;
        break;

    case '/':
        if (b == 0) {
            cout << "You can't divide by zero" << endl;
        } else {
            result = a / b;
            cout << "Divide result" << result << endl;
        }
        break;
    case '^':
        result = pow(a, b);
        cout << "Result:" << result << endl;
        break;
    case 'r':
        if (a < 0) {
            cout << "Error" << endl;
        } else {
            cout << "Result:" << sqrt(a) << endl;
        }
        break;
    default : cout << "Unknown operation" << endl;
    }
    return 0;
}
