#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        for(int k=a;k<=b;k++){
            if(k%2 == 1){
                sum = sum + k;
            }
        }
        printf("Case %d: %d\n",i,sum);
        sum = 0;
    }
    return 0;
}
