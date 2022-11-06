#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter number in a: ";
	cin >> a;
	cout << "Enter number in b: ";
	cin >> b;
	cout << "Enter number in c: ";
	cin >> c;
	if (a > b)
	{
		if (a > c){
			cout << "a is largest number" << endl;
		}
		else {
			cout << "c is largest number" << endl;
		}
	}
	else {
		if (b > c)
		{
			cout << "b is largest number" << endl;
		}
		else
		{
			cout<<"c is largest number" << endl;
		}
	}
}