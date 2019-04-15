#include<stdio.h>
int main()
{
    int n,sum=0,sideCheck=0,lastFinalResult=0;
    int a,b,c,d, d1,d2,d3;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d%d%d%d %d%d%d",&a,&b,&c,&d, &d1,&d2,&d3);

        sum = a+b+c+d;

        if(d1<=d2 && d1<=d3)
            sideCheck = ((d2 + d3) / 2);
        else if(d2<=d1 && d2<=d3)
            sideCheck = ((d1 + d3) / 2);
        else if(d3<=d1 && d3<=d2)
            sideCheck = ((d1 + d2) / 2);

        lastFinalResult = sum + sideCheck;

        if(lastFinalResult >= 90)
            printf("Case %d: A\n",i);
        else if(lastFinalResult >=80 && lastFinalResult<90)
            printf("Case %d: B\n",i);
        else if(lastFinalResult>=70 && lastFinalResult<80)
            printf("Case %d: C\n",i);
        else if(lastFinalResult>=60 && lastFinalResult<70)
            printf("Case %d: D\n",i);
        else if(lastFinalResult<60)
            printf("Case %d: F\n",i);

    }
    return 0;
}
