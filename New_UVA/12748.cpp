#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tst,  i, j, x[110], y[110], r[110], n, router, f, cnt = 0 ;
    double k, l, d, a, b ;
    scanf("%d", &tst) ;
    while (tst--)
    {
        scanf("%d %d",  &n, &router);
        for( i = 0; i<n; i++)   scanf("%d %d %d", &x[i], &y[i], &r[i] ) ;
        printf("Case %d:\n", ++cnt) ;
        while(router--)
        {
            scanf("%lf %lf", &a, &b) ;
            f = 0 ;
            for( i = 0; i<n; i++)
            {
                k = double ( abs(double( x[i]) - a) ) ;
                l = double ( abs(double (y[i]) - b) ) ;
                d = sqrt(( k * k) + ( l * l) ) ;
                if( d <= r[i] )
                {
                    f = 1 ;
                    printf("Yes\n") ;
                    break;
                }
            }
            if( f == 0 )
                printf("No\n") ;
        }
    }
    return 0 ;
}
