#include <iostream>
using namespace std ;

int main ()
{

    int n, i, s ;
    while ( cin >>n)
    {
        s = n ;
        while (n>2)
        {
            s=s+(n/3);
            n=n/3+n%3;
        }
        if(n==2)
            s++;
        cout<<s<<endl;
    }
    return 0 ;
}
