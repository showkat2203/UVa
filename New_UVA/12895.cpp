#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

ll pow_long(ll n, ll p )
{
    if( p == 0 )
        return 1 ;
    if( p % 2 == 0 )
    {
        ll t = pow_long(n, p / 2) ;
        return t * t ;
    }
    else
        return n * pow_long(n, p - 1) ;
}

int main()
{
    ll i, k, tst, l, n, m, sum ;
    char a[15] ;
    scanf("%lld", &tst);
    getchar() ;
    while ( tst-- )
    {
        scanf("%s", &a) ;
        n = atoi(a) ;
        l = strlen(a) ;
        sum = 0 ;
        for( i = 0; i < l ; i++ )
        {
            m = ( a[i] - '0' ) ;
            k = pow_long(m, l) ;
            sum += k  ;
        }
        if( n == sum )
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n") ;
    }
    return 0 ;
}
