//selection sort
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
		cout << arr[i] << " ";
	}
	for (int i = 0; i < s - 1; i++) {
		int index = i;
		for (int j = i+1; j < s; j++) {
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		if (index != i) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
	cout << "\nArray after sorting: ";
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
}