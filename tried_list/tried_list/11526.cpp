#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#define Max 1000000

using namespace std;

int main()
{
    //freopen("11526.txt","r",stdin);
    long long  tst, n , i , k, m , res ;
    scanf("%lld",&tst);
    while(tst--)
    {
        scanf("%lld",&n);
        m = sqrt(n);
        res = 0;
        for(i=1; i<=m; i++)
        {
            res+=n / i;
        }
        //printf("%lld\n",res);
        res = res*2 - (m*m);
        printf("%lld\n",res);
    }
    return 0;
}

