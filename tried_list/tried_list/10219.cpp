#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, c, r, res, m, i , j ;
    while( scanf("%lld %lld",&n,&r ) == 2 )
    {
        double dig = 0.0 ;
        if ( r > n - r )
        {
            for (  i = r + 1; i <= n; i++ )
                dig += (log10 (i) - log10 (n - i + 1));
        }
        else
        {
            for ( i = n - r + 1; i <= n; i++ )
                dig += (log10 (i) - log10 (n - i + 1));
        }

        dig = floor( dig )  + 1   ;
        printf("%.0lf\n", dig) ;
    }
    return 0;
}
