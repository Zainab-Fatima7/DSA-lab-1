
#include <iostream>
using namespace std;

int main() {
    int n;

    // Read and validate n
    cout << "Enter number of marks (1-10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Error: n must be between 1 and 10." << "\n";
        return 0;
    }

    // Allocate the original array
    int* marks = new int[n];

    // Read original marks
    cout << "Enter " << n << " marks:\n";

    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    // Allocate a second array with one extra position
    int* newMarks = new int[n + 1];

    // Copy the original n values using pointer notation
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }

    // Read the new student's mark into the final position
    cout << "Enter the new mark: ";
    cin >> *(newMarks + n);

    // delete(release memory) the old dynamic array in heap
    delete[] marks;

    // Make the original pointer refer to the new array in heap
    marks = newMarks;

    // Update the stored size
    n = n + 1;

    // Display all values
    cout << "\n";
    cout << "Updated marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }

    cout << "\n";

    // Release the memory and assign the pointer to nullptr
    delete[] marks;
    marks = nullptr; 

    return 0;
}

