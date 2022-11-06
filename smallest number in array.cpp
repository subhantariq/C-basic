#include<iostream>
using namespace std;
int main()
{
	int arr[100], total;
	cout << "Enter total elements: ";
	cin >> total;
	for (int i = 0; i < total; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		;		cin >> arr[i];
	}
	cout << "Entered array is: ";
	for (int i = 0; i < total; i++)
	{
		cout << arr[i] << " ";
	}
	int large = arr[0];
	for (int i = 1; i < total; i++)
	{
		if (large > arr[i]) {
			large = arr[i];
		}
	}
	cout << "\nSmallest number in array: " << large;
}