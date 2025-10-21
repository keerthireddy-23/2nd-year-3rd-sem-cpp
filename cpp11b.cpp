#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter a number (1-3) to trigger an exception:\n";
        cout << "1 -> int exception\n2 -> double exception\n3 -> char exception\n";
        cin >> choice;

        if (choice == 1)
            throw 100;           // int exception
        else if (choice == 2)
            throw 3.14;          // double exception
        else if (choice == 3)
            throw 'X';           // char exception
        else
            cout << "No exception thrown!" << endl;
    }
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    }
    catch (char e) {
        cout << "Caught a char exception: " << e << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    cout << "Program continues after handling exceptions." << endl;

    return 0;
}

