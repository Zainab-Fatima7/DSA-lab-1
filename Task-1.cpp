

#include <iostream>
using namespace std;

int main() {
    int sales[5];
    int* p = sales;

    // Read five non negative values using pointer notation
    cout << "Enter sales for 5 days: " << "\n";

    for (int i = 0; i < 5; i++) {
        do {
            cout << "Day " << i + 1 << ": ";
            cin >> *(p + i);

            if (*(p + i) < 0)
                cout << "Please enter a non-negative value. " << "\n";

        } while (*(p + i) < 0);
    }

    // Display values and calculate total
    int total = 0;
    cout << "\n";
    cout << "Sales values: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        total += *(p + i);
    }
    cout << "\n";
    cout << "Total sales: " << total << "\n";

    // Adding 2 to the third day's value
    *(p + 2) += 2;

    // finding total using updated value
    total = 0;

    cout << "\n";
    cout << "Updated sales values: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    cout << "\n";
    cout << "Updated total sales: " << total << "\n";

    return 0;
}
