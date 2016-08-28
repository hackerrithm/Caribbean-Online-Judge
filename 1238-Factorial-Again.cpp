#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, fact, result, i;
    scanf("%d",&num);
    while(num != 0)
    {
        if(num==0) break;
        result = 0;
        fact = 1;
        i = 1;
        while(num > 0)
        {
            result = result + fact * (num%10);
            num = num/10;
            i++;
            fact = fact * i;
        }
        printf("%d\n",result);
        scanf("%d",&num);
    }
    return 0;
}