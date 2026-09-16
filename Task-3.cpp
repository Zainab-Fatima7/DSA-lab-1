
#include <iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    // Read six non-negative values using pointer notation
    cout << "Enter sales for each branch: ";
    cout << "\n";
    for (int r = 0; r < 2; r++) {
        cout << "Branch " << r + 1 << ": ";

        for (int c = 0; c < 3; c++) {
            do {
                cin >> *(*(rowPtr + r) + c);

                if (*(*(rowPtr + r) + c) < 0) {
                    cout << "Enter a non-negative value: ";
                }

            } while (*(*(rowPtr + r) + c) < 0);
        }
    }

    // Display the two-row table
    cout << "\n";
    cout << "Sales Table: ";
    cout << "\n";

    for (int r = 0; r < 2; r++) {
        cout << "Branch " << r + 1 << ": ";

        for (int c = 0; c < 3; c++) {
            cout << *(*(rowPtr + r) + c) << " ";
        }

        cout << endl;
    }

    // Calculate total for each branch
    cout << "\n";
    cout << "Branch Totals: ";
    cout << "\n";

    for (int r = 0; r < 2; r++) {
        int total = 0;  // Reset total for each branch

        for (int c = 0; c < 3; c++) {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Branch " << r + 1 << ": " << total << "\n";
    }

    // Calculate total for each day
    cout << "\n";
    cout << "Day Totals: ";
    cout << "\n";

    for (int c = 0; c < 3; c++) {
        int total = 0;  // Reset total for each day

        for (int r = 0; r < 2; r++) {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Day " << c + 1 << ": " << total << "\n";
    }

    return 0;
}

