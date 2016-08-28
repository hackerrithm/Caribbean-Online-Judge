#include <iostream>
    #include <string>
    using namespace std;
    string s;
    int main()
    {
    	int T,k,sum1,sum2,b,c,d,i;
    	cin>>T;
    	for(k=1;k<=T;k++)
    	{
    		cin>>s;
    		sum1=0;
    		sum2=0;
    		for(i=0;i<s.size();i=i+2)
    			sum1=sum1+int(s[i])-int('0');
    		for(i=1;i<s.size();i=i+2)
    			sum2=sum2+int(s[i])-int('0');
    		if(sum1<sum2)
    			swap(sum1,sum2);
    		if( (sum1-sum2)%11==0 && (sum1+sum2)%9==0 && int(s[s.size()-1]-'0')%5==0)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    	return 0;
    }
