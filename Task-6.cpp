
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int* values = new int[n];

    // Read  three integers
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    // Display all three integers
    cout << "Values: ";

    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }

    cout << "\n";

    // Release the dynamically allocated array
    delete[] values;

    // Reset the pointer
    values = nullptr;

    return 0;
}

