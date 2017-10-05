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

ll a[115], sum, half, n, dp[150][55000] ;

ll call(ll i, ll s )
{
    if( i == n )
        return 0 ;
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    ll fst = 0ll, scnd = 0ll ;
    if( s + a[i] <= half )
        fst = a[i] + call( i + 1, s + a[i] ) ;
    scnd = call(i + 1, s ) ;
    dp[i][s] = max(fst, scnd) ;
    return dp[i][s] ;
}


int main()
{
//    freopen("in.txt", "r", stdin) ;
    ll i, cas = 0, tst, res, ans ;
    scanf("%lld", &tst) ;
    while(tst--)
    {
        scanf("%lld", &n) ;
        sum = 0ll ;
        for( i = 0; i <n; i++ )
        {
            scanf("%lld", &a[i]) ;
            sum += a[i] ;
        }
        half = sum / 2ll ;
        memset(dp, -1, sizeof dp) ;
        res = call(0ll, 0ll) ;
        ans = abs( sum - res ) ;
        printf("%lld\n", abs(ans - res)) ;
    }
    return 0 ;
}

