//bubble sort
#include<iostream>
using namespace std;
int main()
{
	int s, arr[100];
	cout << "Enter total array elements: ";
	cin >> s;
	for (int i = 0; i < s; i++) {
		cout << "Enter " << i + 1 << " number: ";
		cin >> arr[i];
	}
	cout << "Entered array is: ";
	for (int i = 0; i < s; i++) {
		cout << arr[i] <<" ";
	}
	for (int i = 0; i < s - 1; i++) {
		for (int j = 0; j < s - (i + 1); j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\nArray after sorting: ";
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
}