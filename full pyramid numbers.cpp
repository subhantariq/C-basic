#include<iostream>
using namespace std;
int main()
{
	int num{};
	cout << "Enter number of rows: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < (num - i) - 1; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < (i * 2) + 1; k++)
		{
			cout << k + 1;
		}
		cout << endl;
	}
	int j;
	for (int i = 0; i < num - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			cout << " ";
		}
		for(int k=0;k<((num-1)*2)-(i+j);k++)
		{
			cout << k + 1;
		}
		cout << endl;
	}
}