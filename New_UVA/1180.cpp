#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }

#define Maxi 10000005
#define sq sqrt(Maxi)


typedef long long ll ;

bool yes_no[Maxi] ;
ll prime[800050], sz = 0 ;

ll divi[Maxi], div_sum[Maxi] ;

void seive()
{
    ll i, j ;
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


ll gene_res(ll n)
{
    ll i, j, l, cnt, res ;
        cnt = 0 ;
        l = 1 ;
        res = 1 ;
        for( j = 0; prime[j] * prime[j] <= n; j++ )
        {
            cnt = 0 ;
            if( n % prime[j] == 0 )
            {
                while( n % prime[j] == 0 )
                {
                    n /= prime[j] ;
                    cnt++ ;
                }
                res *= ( cnt + 1ll ) ;
                l *= ( ( 1ll - power(prime[j], ( cnt + 1ll ) ) ) / ( 1ll - prime[j]) ) ;
            }
        }
        if( n != 1 )
            l *= ( ( 1ll - power(n, 2ll)) / ( 1ll - n ) ) ;
    return l ;
}

int main()
{
    seive() ;
    ll n, m , i, j, how, numbers[100010], k ;
    scanf("%lld", &how ) ;
    for( i = 0; i < how; i++ )
    {
        if( i < how - 1 )
            scanf("%lld,", &numbers[i]) ;
        else
            scanf("%lld" , &numbers[i]) ;
    }
    for( k = 0; k < how; k++ )
    {
        n = numbers[k] ;
        i = n ;
        n = power(2ll, n - 1ll) * ( power(2ll, n) - 1ll ) ;
        //printf("%lld\n", n) ;
        m = gene_res(n) - n ;
        //printf("%lld\n", gene_res(n)) ;
        if( yes_no[i] == false && m == n )
            printf("Yes\n", n) ;
        else
            printf("No\n") ;
    }
    return 0 ;
}

