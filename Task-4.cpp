
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Read and validate rows and columns
    cout << "Enter number of students (rows): ";
    cin >> rows;

    cout << "Enter number of subjects (columns): ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Error: rows and columns must be greater than 0." << "\n";
        return 0;
    }

    // Allocate array of row pointers
    int** marks = new int* [rows];

    // Allocate cols integers for each row
    for (int r = 0; r < rows; r++) {
        *(marks + r) = new int[cols];
    }

    // Read marks using pointer notation
    cout << "\n";
    cout << "Enter marks for each student: ";
    cout << "\n";

    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ": ";

        for (int c = 0; c < cols; c++) {
            cin >> *(*(marks + r) + c);
        }
    }

    // Display the matrix
    cout << "\n";
    cout << "Marks Matrix: ";
    cout << "\n";

    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ": ";

        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << " ";
        }

        cout << "\n";
    }

    // Calculate student totals and find highest total
    int bestTotal = 0;
    int bestStudent = 1;

    cout << "\n";
    cout << "Student Totals:";
    cout << "\n";

    // Determine the first student's total first
    for (int c = 0; c < cols; c++) {
        bestTotal += *(*(marks + 0) + c); // suppose the total of student 1 is the best(later we find best using comparision)
    }

    cout << "Student 1: " << bestTotal << endl;

    // Calculate totals of remaining students
    for (int r = 1; r < rows; r++) {
        int total = 0;

        for (int c = 0; c < cols; c++) {
            total += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << ": " << total << endl;

        if (total > bestTotal) {
            bestTotal = total;
            bestStudent = r + 1;
        }
    }

    cout << "\n";
    cout << "Top student: " << bestStudent << endl;
    cout << "Highest total: " << bestTotal << endl;

    // Delete each separately allocated row
    for (int r = 0; r < rows; r++) {
        delete[] * (marks + r);
    }

    // Delete the row-pointer array
    delete[] marks;

    // Set pointer to nullptr
    marks = nullptr;

    return 0;
}

