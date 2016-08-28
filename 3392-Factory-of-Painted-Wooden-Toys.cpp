#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    while(1)
    {
        int val1=0,val2=0,val3=0,result=0;
        scanf("%d",&num);
        if(num==0) break;

        if(num <=2) printf("%d\n",result);

        if(num > 2)
        {
            val1 = num - 2;
            val2 = val1 * 8;
            val3 = val1 * 4;
            result = val3 + val2;
            printf("%d\n",result);
        }
    }
    return 0;
}
