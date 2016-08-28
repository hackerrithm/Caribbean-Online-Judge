#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    int t=0,a=0,i=0,n=0;
    cin>>t;
    while(t--){
            a = 0;
            i = 0;
        cin>>str1>>str2;
        n = str1.length();
        while(n--)
        {
            if(str1.at(i) != str2.at(i))
                a++;
            i++;
        }
        cout<<a<<endl;
    }
    return 0;
}
