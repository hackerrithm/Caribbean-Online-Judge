#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,mean,sum=0;
    int i;
    for(i = 0; i < 12; i++){
        scanf("%f",&sal);
        sum = sum+sal;
    }
    mean = sum/12;
    printf("$%.2f",mean);
    return 0;
}
