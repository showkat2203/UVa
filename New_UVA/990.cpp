#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }


//ll bigmod(ll num , ll p , ll mod)
//{
//    ll sum = 1 , temp = num;
//    while(p)
//    {
//        if(p & 1) sum = (sum * temp) % mod;
//        temp = (temp * temp) % mod; p = p >> 1;
//    }
//    return sum;
//}


typedef long long ll ;

ll air_cap, dive[100010], gold[100010], w, t, khoni, dp[1010][10010], n, path[1010][10010] ;


ll call(ll i, ll s )
{
    if( i == n )
        return 0 ;
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    ll fst = 0ll, scnd = 0ll ;
    if( s + ( w * 3ll * dive[i] ) <= air_cap )
        fst = gold[i] + call( i + 1, s + ( w * 3ll * dive[i] ) ) ;
    scnd = call(i + 1, s ) ;
    if( fst >= scnd )
    {
        path[i][s] = 1 ;
        dp[i][s] = fst ;
    }
    else
    {
        path[i][s] = 2 ;
        dp[i][s] = scnd ;
    }
    return dp[i][s] ;
}


int main()
{
//    freopen("in.txt", "r", stdin) ;
    ll i, cas = 0, res, k[10010], j, new_line = 0 ;
    while( scanf("%lld %lld", &air_cap, &w) == 2 )
    {
        if( new_line )
            puts("") ;
        new_line++ ;
        scanf("%lld", &n) ;
        for( i = 0; i <n; i++ )
            scanf("%lld %lld", &dive[i], &gold[i]) ;
        cas = 0 ;
        memset(dp, -1, sizeof dp) ;
        res = call(0ll, 0ll) ;
        memset(k, 0, sizeof k) ;
        j = 0 ;
        for( i = 0; i < n; i++ )
        {
            if( path[i][j] == 1 )
            {
                cas++ ;
                k[i] = 1 ;
                j += ( w * 3ll * dive[i] ) ;
            }
        }
        printf("%lld\n%lld\n", res, cas) ;
        for( i = 0; i < n; i++ )
            if( k[i] )
                printf("%lld %lld\n", dive[i], gold[i]) ;
    }
    return 0 ;
}


