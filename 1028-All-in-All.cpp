#include<iostream>
#include<string>

	using namespace std;

	int main()
	{
		string s, t;
		int i = 0, j = 0;

		while(cin >> s)
		{
			cin >> t;
			int u = 0;
			i = 0, j = 0;
			while(i < t.length())
			{
				if(j >= s.length())
					break;

				if(s.at(j) == t.at(i))
				{
					u++;
					j++;
				}
				i++;
			}
			if(u == s.length())
			{
				cout<< "Yes" << endl;
			}else{
				cout<< "No" << endl;
			}
		}
		return 0;
	}


