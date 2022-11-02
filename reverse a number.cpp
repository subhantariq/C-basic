#include<iostream>
using namespace std;
int main()
{
	int number{}, num{};
	cout << "Enter a number: ";
	cin >> number;
	while (number)
	{
		num = (number % 10) + (num * 10);
		number = number / 10;
	}
	cout << num;
}