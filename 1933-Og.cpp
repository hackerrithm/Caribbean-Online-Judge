#include<iostream>
using namespace std;

int main()
{
	int a, b, sum;
	while (true)
	{
		cin >> a >> b;
		if (a != 0 && b != 0)
		{
			sum = a + b;
			cout << sum << endl;
		}
		else{
			break;
		}

	}

	return 0;

}