#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int length) {
	int n = length / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[length - 1 - index];
		array[length - 1 - index] = temp;
	}
}