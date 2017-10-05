#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define Maxi 1010100
#define sq sqrt(Maxi)

bool yes_no[Maxi] ;
ll prime[Maxi], sz = 0 ;

void seive()
{
    ll n, i, j ;
    memset( yes_no, false, sizeof yes_no ) ;
    yes_no[0] = yes_no[1] = true ;
    yes_no[2] = false ;
    prime[sz++] = 2;
    for( i = 4; i <= Maxi; i+= 2)
        yes_no[i] = true ;
    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
                yes_no[j] = true ;

    for( i = 3; i <= Maxi; i += 2 )
        if( yes_no[i] == false )
            prime[sz++] = i ;

}

int main()
{
    seive() ;
    ll i, j, k, l, m, n , cas = 0, sum  ;
    while( scanf("%lld", &n) == 1 && n )
    {
        if( n == 1 )
        {
            n = 2 ;
            printf("Case %lld: %lld\n", ++cas, n) ;
            continue ;
        }
        m = n ;
        sum = 0 ;
        for( i = 0; i < sz && prime[i] * prime[i] <= n; i++ )
        {
            k = 1 ;
            while(n % prime[i] == 0)
            {
                k *= prime[i] ;
                n /= prime[i] ;
            }
            if( k != 1 )
                sum += k ;
        }
        printf("Case %lld: ", ++cas) ;
        if( n != 1 )
            sum += n ;
        if( sum == m )
            sum++ ;
        printf("%lld\n", sum) ;
    }
    return 0 ;
}
