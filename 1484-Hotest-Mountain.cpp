#include <iostream>
using namespace std;

int main()
{
    int t=0, mountain = 0, i = 1;
    float temp = 0.0;
    float max = 0;
    cin>>t;
    while(t--)
    {
        cin>>temp;
        if(temp >= max)
        {
            max = temp;
            mountain = i;
        }
        i++;
    }
    cout<<mountain<<endl;
    return 0;
}