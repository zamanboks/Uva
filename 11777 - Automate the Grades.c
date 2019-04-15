#include <stdio.h>

int main(void)
{
    int s, n, i, t1,t2,f,a,c1,c2,c3,k;
    while (scanf("%d",&n)==1)
    {
        s=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d%d%d%d%d%d%d",&t1,&t2,&f, &a, &c1,&c2,&c3);
            if(c1<=c2&&c1<=c3)
                k=(c2+c3)/2;
            else if(c2<=c1&&c2<=c3)
                k=(c1+c3)/2;
            else if(c3<=c1&&c3<=c2)
                k=(c1+c2)/2;
            s=t1+t2+f+a+k;
            if(s>=90)
                printf("Case %d: A\n",i);
            else if(s>=80 && s<90)
                printf("Case %d: B\n",i);
            else if(s>=70 && s<80)
                printf("Case %d: C\n",i);
            else if(s>=60 && s<70)
                printf("Case %d: D\n",i);
            else if(s<60)
                printf("Case %d: F\n",i);
        }
    }
    return 0;
}

