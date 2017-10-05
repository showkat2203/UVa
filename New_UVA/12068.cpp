#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

template < class T > inline T gcd(T a,T b) { if(a < 0) return gcd(-a,b); if(b < 0)return gcd(a,-b); return (b == 0) ? a : gcd(b ,a % b);}
template < class T > inline T lcm(T a,T b) { if(a < 0) return lcm(-a,b); if(b < 0)return lcm(a,-b); return a * (b / gcd(a , b));}

int main()
{
    ll i, j, k, l, m, n, tst, cas = 0 ;
    scanf("%lld", &tst) ;
    while( tst-- )
    {
        scanf("%lld", &n) ;
        ll aa[n] ;
        ll sum = 0 ;
        for( i = 0; i < n; i++) scanf("%lld",  &aa[i]) ;
        m = aa[0] ;
        for( i = 0 ; i < n ; i++ )  m = lcm(m , aa[i]) ;
        for( i = 0 ; i < n ; i++ )  sum += ( m / aa[i] ) ;
        m *= n ;
        k = gcd(m, sum) ;
        m /= k , sum /= k ;
        printf("Case %lld: %lld/%lld\n", ++cas, m, sum) ;
    }
    return 0 ;
}
