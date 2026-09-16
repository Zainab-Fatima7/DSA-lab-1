
#include <iostream>
using namespace std;

int main() {
    int n;

    // Read and validate n
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: the number of students must be greater than 0." << "\n";
        return 0;
    }

    // Dynamically allocate array
    int* marks = new int[n];

    // loop for reading marks into the array
    cout << "Enter marks for " << n << " students: "<< "\n";

    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    // Display marks, calculate total and pass count
    int total = 0;
    int passCount = 0;

    cout << "Marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";

        total += *(marks + i);

        if (*(marks + i) >= 50) {
            passCount++;
        }
    }


    // for average casted int to double so the fractional part won't be lost
    double average = static_cast<double>(total) / n;

    cout << "\n";
    cout << "Total: " << total << "\n";
    cout << "Average: " << average << "\n";
    cout << "Pass count: " << passCount << "\n";


    delete[] marks;
    marks = nullptr;

    return 0;
}

