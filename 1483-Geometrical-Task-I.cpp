#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int a,b,ans;
	cin >> s;
	if (s == "square")
	{
		cin >> a;
		ans = a*a;
		cout << ans;
	}
	else if (s == "rectangle")
	{
		cin >> a >> b;
		ans = a*b;
		cout << ans;
	}
return 0;
}