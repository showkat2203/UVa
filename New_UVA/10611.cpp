#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long a[50010], b[105010], c[100010], i, j, k, l, m, n, M, Mi, q ;
    while(scanf("%lld", &n) == 1 && n)
    {
        for(i = 0; i<n; i++)   scanf("%lld", &a[i]) ;

        scanf("%lld", &q);
        for( i = 0; i<q; i++)
            scanf("%lld", &b[i]) ;
        for( i = 0; i <q ; i++)
        {
            m = 0, M = 100000000000 ;
            for( j = 0; j<n; j++)
            {
                if( a[j] < b[i] && m < a[j] )
                    m = a[j] ;
                if( a[j] > b[i] && M > a[j] )
                    M = a[j] ;
            }
            if( m == 0 && M != 100000000000 )
                printf("X %lld\n", M) ;
            else if ( m != 0 && M == 100000000000 )
                printf("%lld X\n", m);
            else if( m == 0 && M == 100000000000 )
                printf("X X\n") ;
            else
                printf("%lld %lld\n", m, M) ;
        }
    }
    return 0 ;
}
