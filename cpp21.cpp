#include <iostream>
using namespace std;

// Global variable
int value = 100;

// Custom namespace
namespace Demo {
    int value = 200;

    void display() {
        cout << "Inside Demo namespace: value = " << value << endl;
    }
}

// Another namespace
namespace Test {
    int value = 300;

    void display() {
        cout << "Inside Test namespace: value = " << value << endl;
    }
}

int main() {
    int value = 10;  // Local variable

    cout << "Local value = " << value << endl;
    cout << "Global value using scope resolution ::value = " << ::value << endl;

    // Fully qualified names
    Demo::display();
    Test::display();

    // using directive
    using namespace Demo;
    cout << "Accessing Demo::value directly after using namespace: " << value << endl;

    return 0;
}

