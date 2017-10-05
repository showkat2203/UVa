#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define sq 450000

bool yes_no[sq] ;

ll prime[800000], prime_list[sq], k = 0 ;

void seive()
{
    ll n, i, j ;
    memset( yes_no, false, sizeof yes_no ) ;
    yes_no[0] = yes_no[1] = true ;
    yes_no[2] = false ;
    prime[k++] = 2;
    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            for( j = i * i ; j <= sq; j += ( 2 * i ) )
                yes_no[j] = true ;

    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            prime[k++] = i ;
    //printf("%d\n", k) ;
//    for( i = 0; i < k; i++ )
//        printf("%d\n", prime[i]) ;
}


int main()
{
    //freopen("in.txt", "r", stdin) ;
    seive() ;
    ll n, N, i, j, l, m, cnt, res, ans ;
    while( scanf("%lld", &n) == 1 && n )
    {
        if( n == 1 )
        {
            puts("1") ;
            continue ;
        }
        N = n ;
        j = 0 ;
        cnt = 0 ;
        for( i = 0; i < k && prime[i]*prime[i] <= n; i++ )
        {
            cnt = 0 ;
            while( n % prime[i] == 0 )
            {
                n /= prime[i] ;
                cnt++;
            }
            if( cnt != 0 )
            {
                prime_list[j++] = prime[i] ;
            }
        }
        if( n != 1 )
            prime_list[j++] = n ;
        res = N, ans = 1 ;
        for( i = 0; i < j; i++)
        {
            res *= (prime_list[i] - 1) ;
        }
        for( i = 0; i < j; i++)
        {
            ans *= (prime_list[i]) ;
        }
        printf("%lld\n", N - ( res / ans ) ) ;
    }
    return 0 ;
}
