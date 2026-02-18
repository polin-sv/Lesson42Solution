#include <iostream>
using namespace std;


int main() {
	const int SIZE = 10;
	int array[SIZE];

	cout << "input your array elements: ";
	for (int index = 0; index < SIZE; index++) 
	{
		cin >> array[index];
	}

	int positive_sum = 0;
	int negative_sum = 0;

	for (int index = 0; index < SIZE; index++)
	{
		positive_sum += array[index] > 0 ? array[index] : 0;
	}

	for (int index = 0; index < SIZE; index++)
	{
		if (array[index] < 0) {
			negative_sum += array[index];
		}
	}

	cout << "Sum of positive elements is " << positive_sum << "\n";
	cout << "Sum of negative elements is " << negative_sum << "\n";


	return 0;
}