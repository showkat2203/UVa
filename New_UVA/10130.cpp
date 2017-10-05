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

ll air_cap, price[1010], weight[1010], dp[1010][35], n ;


ll call(ll i, ll s )
{
    if( i == n )
        return 0 ;
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    ll fst = 0ll, scnd = 0ll ;
    if( s + weight[i] <= air_cap )
        fst = price[i] + call( i + 1, s + weight[i] ) ;
    scnd = call(i + 1, s ) ;
    return dp[i][s] = max(fst, scnd) ;
}


int main()
{
//    freopen("in.txt", "r", stdin) ;
    ll i, tst, member ;
    scanf("%lld", &tst) ;
    while( tst-- )
    {
        scanf("%lld", &n) ;
        for( i = 0; i < n; i++ )
            scanf("%lld %lld", &price[i], &weight[i]) ;
        ll sum = 0 ;
        scanf("%lld", &member) ;
        while(member--)
        {
            scanf("%lld", &air_cap) ;
            memset(dp, -1ll, sizeof dp) ;
            sum += call(0, 0) ;
        }
        printf("%lld\n", sum) ;
    }
    return 0 ;
}



