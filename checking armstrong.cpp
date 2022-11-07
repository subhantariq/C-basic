#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout << "Enter a number: ";
	cin >> num;
	int n = num;
	while (num != 0)
	{
		int temp=num % 10;
		sum = sum + (temp * temp * temp);
		num = num / 10;
	}
	cout << "Enter number armstrong result: " << sum << endl;
	if (sum == n){
		cout << "Entered number is armstrong";
	}
	else {
		cout << "Entered number is not an armstrong";
	}
}