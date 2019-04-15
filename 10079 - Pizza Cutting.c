#include <stdio.h>
int main()
{
    long int n, i,c;
    while (scanf("%ld",&n)==1)
    {
        c=0;
        if(n>=0&&n<=210000000)
        {
            c=((n*(n+1))/2)+1;
            printf("%ld\n",c);
        }
        else if(n<0)
            break ;
    }
    return 0;
}
