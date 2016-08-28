    #include <iostream>
    using namespace std;
     
    int main() 
    {
    	int t,k,n,odd,even,b,c,i;
    	cin>>t;
    	for(k=1;k<=t;k++)
    	{
    		cin>>n;
    		odd=0;
    		even=0;
    		for(i=1;i<=n;i++)
    		{
    			cin>>b;
    			if(b%2==0)
    				even++;
    			else
    				odd++;
    		}
    		cout<<even<<" even and "<<odd<<" odd."<<endl;
    	}
    	return 0;
    }