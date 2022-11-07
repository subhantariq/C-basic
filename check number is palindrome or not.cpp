#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int rev = 0, n = num;
	while (num != 0)
	{
		int temp = num % 10;
		num = num / 10;
		rev = rev * 10 + temp;
	}
	cout << "Number is original condition: " << n << endl;
	cout << "Number in reverse order: " << rev << endl;
	if (rev == n)
	{
		cout << "Entered number is palindrome" << endl;
	}
	else {
		cout << "Entered number is not a palindorme" << endl;
	}
}