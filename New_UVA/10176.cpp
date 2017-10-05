#include <bits/stdc++.h>

using namespace std ;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

typedef long long ll ;

#define mod 131071

int main()
{
    string given, res, ans ;
    ll i, j, k, l, m, n, sum ;
    while( getline( cin, given ) )
    {
        ans = given ;
        sum = 0 ;
        while( given[given.size()-1] != '#' )
        {
            getline(cin, given) ;
            ans += given ;
        }
        k = ans.size() ;
        for( i = 0; i < k - 1 ; i++ )
        {
            sum = ( sum  * 2 + ( ans[i] - '0')) % mod ;
        }
        if( sum == 0 )
            puts("YES") ;
        else
            puts("NO") ;
    }
    return 0 ;
}
