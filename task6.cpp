/*
#include <iostream>
using namespace std;
int main()
{
	// declare an srray of size 6
	int array[6];
	// loop which takes user input to initialize the elements of the arry
	for (int i = 0; i < 6; i++) {
		cin >> array[i];
	}
	// loop with iteration from 0 to half of the size of the array
	for (int i = 0; i < 3; i++) {
		// swampping elements ith and (size-1-i)th element
		// assign ith element to temp
		int temp = array[i];
		// assign (size-1-i)th element to i
		array[i] = array[5 - i];
		// finally temp is assigned to (size-1-i)th element 
		array[5 - i] = temp;
	}
	// display the reversed array
	cout << "Reversed array: ";
	for (int i = 0; i < 6; i++) {
		cout << array[i] << " ";
	}

	return 0;
}
*/