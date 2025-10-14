#include <iostream>
using namespace std;

void callByValue(int a, int b) {
    a = a + 10;
    b = b + 20;
    cout << "Inside callByValue: a = " << a << ", b = " << b << endl;
}

void callByReference(int &x, int &y) {
    x = x + 10;
    y = y + 20;
    cout << "Inside callByReference: x = " << x << ", y = " << y << endl;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before callByValue: num1 = " << num1 << ", num2 = " << num2 << endl;
    callByValue(num1, num2);
    cout << "After callByValue: num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "\nBefore callByReference: num1 = " << num1 << ", num2 = " << num2 << endl;
    callByReference(num1, num2);
    cout << "After callByReference: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

