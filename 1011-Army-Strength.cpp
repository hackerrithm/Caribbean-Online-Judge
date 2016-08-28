#include <iostream>
    #include <cstdio>
    using namespace std;
    int main()
    {
    	int c,a,b,n,m,i,t,k;
    	scanf("%d",&t);
    	for(k=1;k<=t;k++)
    	{
    		scanf("%d%d",&n,&m);
    		a=-1000000;
    		b=-1000000;
    		for(i=1;i<=n;i++)
    		{
    			scanf("%d",&c);
    			if(c>a)
    				a=c;
    		}
    		for(i=1;i<=m;i++)
    		{
    			scanf("%d",&c);
    			if(c>b)
    				b=c;
    		}
    		if(b>a)
    			printf("MechaGodzilla\n");
    		else
    			printf("Godzilla\n");

    	}
    	return 0;
    }
