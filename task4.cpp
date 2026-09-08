/*
#include <iostream>
using namespace std;
int main()
{
	// declare an array of size 8
	int array[8];
	// loop to initialize the array using user input
	for (int i = 0; i < 8; i++) {
		cin >> array[i];
	}
	// assigned a very large value to minimum and a very small value to maximum
	int min = INT_MAX;
	int max = INT_MIN;
	// integer variables to store the indexes
	int min_index, max_index;
	// loop to find the smallest and the largest
	for (int i = 0; i < 8; i++) {
		if (array[i] < min) {
			min = array[i];
			min_index = i;
		}
		if (array[i] > max) {
			max = array[i];
			max_index = i;
		}
	}
	// display on the console
	cout << "Minimum: " << min << " \tIndex: " << min_index << "\n";
	cout << "Maximum: " << max << " \tIndex: " << max_index << "\n";

	return 0;
}
*/