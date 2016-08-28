#include <iostream>

using namespace std;

int main()
{
	int t =0, i =1;
	cin>> t;
	while(t--)
    {
        int arr[10];
		int t=10,up=101,low=0, sum=0;
		for(int i =0; i < t; i++){
			cin>> arr[i];
			sum+=arr[i];
            if(arr[i] > low) low = arr[i];
			if(arr[i] < up) up = arr[i];
		}
		sum = sum - (up+low);
		cout<<i++<<" "<<sum<<endl;
	}
	return 0;
}
