

#include <iostream>
using namespace std;

int main()
{
	// declaring array
	int array[10]; 
	// reading input
	for (int i = 0; i < 10; i++) { 
		cin >> array[i];
	}
	// count for unique values
	int count = 0; 
	for (int i = 0; i < 10; i++) {
		// flag for duplicates
		bool found = false;
		// inner loop for finding duplicates. 
		// if found then the inner loops breaks (as we do not need to change the array in that iteration)
		// and outer loop countinues with the next iteration
		for (int j = 0; j < i; j++) { 
				if (array[i] == array[j]) {
				found = true;
				break;
			}
		}
		// unique (not yet found)
		if (!found) { 
			// assign it to a temporary variable
			int temp = array[i]; 
			// start from i till count (decreasing)
			for (int j = i; j > count; j--) { 
				// move elements to the right of the index count
				array[j] = array[j - 1]; 
			}
			// assign the unique element to the index count 
			// i.e. after the other unique ones and before the duplicates (which were shifted to right)
			array[count] = temp; 
			// increment count
			count++; 
		}
	}
	// display the unique values 
	cout << "Unique values: ";
	for (int i = 0; i < count; i++) {
		cout << array[i] << " ";
	}
	// display the count of the unique values
	cout << "\n" << "Count: " << count;

	return 0;
}
