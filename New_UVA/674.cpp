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

ll air_cap, price[10] = {50, 25, 10, 5, 1}, dp[6][7495], res[7496] ;


ll call(ll i, ll s )
{
    if( i == 5 )
    {
        if( s == air_cap )
            return  1 ;
        else
            return 0 ;
    }
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    ll fst = 0ll, scnd = 0ll ;
    if( s + price[i] <= air_cap )
        fst = call( i , s + price[i] ) ;
    scnd = call(i + 1, s ) ;
    return dp[i][s] = scnd + fst ;
}


int main()
{
//    freopen("in.txt", "r", stdin) ;
    ll i, tst, member ;
    for( i = 0; i <= 7490; i++ )
    {
        air_cap = i ;
        memset(dp, -1, sizeof dp ) ;
        res[i] = call(0, 0) ;
    }
    while( scanf("%lld", &air_cap) == 1 )
    {
        printf("%lld\n", res[air_cap]) ;
    }
    return 0 ;
}



