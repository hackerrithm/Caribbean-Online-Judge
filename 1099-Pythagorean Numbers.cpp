#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(true)
    {
        cin>>a;
        if(a==0)break;
        else cin>>b>>c;

        if((a*a) == ((b*b)+(c*c)))
           {
               cout<<"right"<<endl;
           }
        else if((b*b) == ((a*a)+(c*c)))
                {
                    cout<<"right"<<endl;
                }
        else if((c*c) == ((a*a)+(b*b)))
                {
                  cout<<"right"<<endl;
                }
        else
            {
            cout<<"wrong"<<endl;
        }
    }
    return 0;
}