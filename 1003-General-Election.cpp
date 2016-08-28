#include <iostream>
using namespace std;

int main()
{
    int t, maximum, winner;
    int n , m, arr[5] = {0};
    int sum = 0;
    cin >> t;
    while(t--)
    {
        maximum = 0;
        winner = 0;
        cin >>n>>m;
        for(int i =0 ; i < m; i++)
        {
            for(int j =0; j < n; j++)
            {
                cin >> sum;
                arr[j] = sum + arr[j];
            }
        }
        for(int k =0; k < n; k++){
            if(arr[k] > maximum)
            {
                maximum = arr[k];
                winner = k+1;
            }
            arr[k] = 0;
        }
        cout<<winner<<endl;
    }
}
