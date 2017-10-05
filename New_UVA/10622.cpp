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
    //freopen("in.txt", "r", stdin) ;
    ll n, m , ans, res, cnt, mini, i, p, f ;
    while (scanf("%lld", &n) && n )
    {
        if( n > 0 )
        {
            m = sqrt(n) ;
            f = 0 ;
            for( i = 2; i <= m ; i++)
            {
                ans = 0 ;
                p = 1 ;
                while( ans < n )
                {
                    ans = pow_long(i, p) ;
                    p++ ;
                }
                if( ans == n )
                {
                    res = p - 1 ;
                    f = 1;
                    break ;
                }
            }
            if( f == 0 )
            {
                printf("1\n") ;
            }
            else
                printf("%lld\n", res) ;
        }
        else
        {
            m = sqrt(-n) ;
            f = 0 ;
            for( i = -2; i >= -m ; i--)
            {
                ans = 0 ;
                p = 1 ;
                while( ans > n )
                {
                    ans = pow_long(i, p) ;
                    p++ ;
                }
                if( ans == n )
                {
                    res = p - 1 ;
                    f = 1;
                    break ;
                }
            }
            if( f == 0 )
                printf("1\n") ;
            else
                printf("%lld\n", res) ;
        }
    }
    return 0 ;
}
