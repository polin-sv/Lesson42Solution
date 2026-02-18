#include "util.h"

void user_init(int array[DEFAULT_SIZE], int length) {
	cout << "input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}
}

string convert(int array[DEFAULT_SIZE], int length) {
	string s = "";
	for (int index = 0; index < length; index++)
	{
		s += to_string(array[index]) + " ";
	}

	return s;
}

void print(string msg) {
	cout << msg;
}