#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, j, k, l, a, b, c, d ;
    int tst, i , f , g ;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%lld", &n );
        f = 0, g = 0, d = 0 ;
        for( j = 2; j<=sqrt(n); j++)
        {
            if( n % j == 0 && f == 0 )
            {
                a = j;
                b = n / j ;
                f = 1;
            }
            else if( n % j == 0 && f == 1 )
            {
                c = j;
                d = n / j ;
                g = 1;
            }
            if( f == 1 && g == 1 )
                break;
        }
        printf("Case #%d: %lld = %lld * %lld = %lld * %lld\n", i, n, a, b, c, d);
    }
    return 0;
}

