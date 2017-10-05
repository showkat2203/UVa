#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }

#define Maxi 1000005
#define sq sqrt(Maxi)
#define mod 1000000000
typedef long long ll ;

bool yes_no[Maxi] ;
ll prime[800050], sz = 0 ;

ll ans[Maxi], new_prime_factor[Maxi] ;

void seive()
{
    ll i, j ;
    memset( yes_no, false, sizeof yes_no ) ;
    yes_no[0] = yes_no[1] = true ;
    yes_no[2] = false ;
    prime[sz++] = 2 ;
    for( i = 4; i <= Maxi; i+= 2)
        yes_no[i] = true ;
    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
                yes_no[j] = true ;

    for( i = 3; i <= Maxi; i += 2 )
        if( yes_no[i] == false )
            prime[sz++] = i ;
//    for( i = 0; i < 20; i++ )
//        printf("%d\n", prime[i]) ;
}

void generating_ans()
{
    memset(new_prime_factor, 0, sizeof new_prime_factor) ;
    ll n, i, j, cnt, gun ;
    ans[1] = 1 ;
    for( i = 2; i < Maxi; i++ )
    {
        ans[i] = ans[i-1] ;
        n = i ;
        cnt = 0 ;
        for( j = 0; j < sz && prime[j] * prime[j] <= n; j++ )
        {
            if( n % prime[j] == 0 )
            {
                cnt = 0 ;
                while( n % prime[j] == 0 )
                {
                    n /= prime[j] ;
                    cnt++ ;
                }
                gun = cnt - new_prime_factor[prime[j]] ;
                if( gun > 0 )
                {
                    ans[i] *= ( power(prime[j], gun) ) ;
                    ans[i] %= mod ;
                    new_prime_factor[prime[j]] += gun ;
                }
            }
        }
        if( n != 1 )
        {
            if( new_prime_factor[n] == 0 )
            {
                new_prime_factor[n]++ ;
                ans[i] *= n ;
            }
        }
        while( ans[i] % 10 == 0 )
            ans[i] /= 10 ;
        ans[i] %= mod ;
    }
}


int main()
{
    seive() ;
    generating_ans() ;
    ll n ;
    while( scanf("%lld", &n) == 1 && n )
    {
        printf("%lld\n", ans[n] % 10 ) ;
    }
    return 0 ;
}

