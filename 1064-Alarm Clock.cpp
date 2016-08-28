#include <iostream>
using namespace std;

int main()
{
	int h1, m1, h2, m2, sum1, sum2;
	while(cin >> h1 >> m1 >> h2 >> m2)
    {
		if(h1==0 && m1==0 && h2==0 && m2==0) break;
		sum1 = (h1*60) + m1;
		sum2 = (h2*60) + m2;
		if(sum2 < sum1)
		sum2 += 60*24;
		cout << sum2-sum1 << endl;
	}
	return 0;
}
