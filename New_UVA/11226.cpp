#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }

#define Maxi 500005
#define sq sqrt(Maxi)


typedef long long ll ;

bool yes_no[Maxi] ;
ll prime[80005], sz = 0 ;

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

int main()
{
    seive() ;
    ll n, i, j, m, cas = 0, cnt, ans, tst, num, sum, res  ;
    scanf("%lld", &tst) ;
    while(tst--)
    {
        scanf("%lld %lld", &n, &m) ;
        if( n > m )
            swap(n, m) ;
        cnt = ans = 0 ;
        ll prev = 1 ;
        res = 1 ;
        for( i = n; i <= m; i++ )
        {
            sum = i ;
            cnt = 0 ;
            while( prev != sum )
            {
                ans = 0 ;
                prev = sum ;
                for( j = 0; j < sz && prime[j] * prime[j] <= sum ; j++ )
                {
                    while( sum % prime[j] == 0 )
                    {
                        ans += prime[j] ;
                        sum /= prime[j] ;
                    }
                }
                if( sum != 1 )
                    ans += sum ;
                sum = ans ;
                cnt++ ;
                res = max(cnt, res) ;
            }
            //printf("second: %lld %lld %lld %lld\n", i, sum, res, prev ) ;
        }
        printf("Case #%lld:\n%lld\n", ++cas, res) ;
    }
    return 0 ;
}

