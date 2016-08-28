#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0;
    int y2=0, y1=0, x1=0, x2=0, ans1=0, ans2=0, sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        ans1 = y2 - y1;
        ans2 = x2 - x1;
        if(ans1 < 0)
        {
            ans1 *= -1;
        }
        if(ans2 < 0)
        {
            ans2 *= -1;
        }

        printf("%d\n",ans1+ans2);

    }
    return 0;
}