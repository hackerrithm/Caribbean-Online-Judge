#include <iostream>
using namespace std;

int main()
{
    int t , n, sum,a;
    cin>>t;
    for(int k =0; k < t; k++)
    {
        sum =0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
            if(sum>n) sum = sum%n;
        }
        if(sum == 0)
            cout<<"YES";
        else if(sum%n == 0){
         cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}