#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a, b, one, two;
	int prod = 0;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			prod += (a[i] - '0') * (b[j] - '0');
		}
	}
	cout << prod;
	return 0;
}