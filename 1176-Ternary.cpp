#include<stdio.h>
int main()
{
    long int n = 0, bn = 0, i, sum, ans;
    long int arr[1000];
    while(1)
    {
        i = 0;
        scanf("%ld",&n);
        if(n < 0) break;
        while(i < 100)
        {
            arr[i] = n%3;
            n = n/3;
            if(n==0)
            {
                sum = i;
                break;
            }
            i++;
        }
        for(i = sum; i >=0; i--){
            arr[i-1] +=  arr[i] * 10;
            ans = arr[i];
        }
        printf("%ld\n",ans);
    }
    return 0;
}
