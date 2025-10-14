#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " is: " << square(num) << endl;

    // Inline function called again
    cout << "Square of 5 is: " << square(5) << endl;

    return 0;
}

