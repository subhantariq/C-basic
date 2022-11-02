#include<iostream>
using namespace std;
int main()
{
	int num{}, count{}, temp{};
	cout << "Enter a number: ";
	cin >> num;
	temp = num;
	while (temp)
	{
		count++;
		temp = temp / 10;
	}
	cout << "Total numbers in " << num << " are: "<<count;
}