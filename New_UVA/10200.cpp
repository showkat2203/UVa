#include<bits/stdc++.h>

using namespace std ;

#define eps 1e-9

typedef long long ll ;

ll prime[10010] ;

ll check(ll n)
{
    ll i ;
    if( n % 2  == 0 )
        return 0 ;
    for( i = 3; i <= sqrt(n); i+=2 )
    {
        if( n % i == 0 )
        {
            return 0 ;
        }
    }
    return 1 ;
}

void seive()
{
    memset(prime, 0, sizeof prime) ;
    ll i, m ;
    for( i = 0; i <= 10000; i++ )
    {
        m = ( i * i ) + i + 41 ;
        if( check(m) )
            prime[i] = 1 ;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin ) ;
    seive() ;
    ll f, a, b, n, m, j, k, l, i ;
    while( ~scanf("%lld %lld", &a, &b) )
    {
        k = l = 0 ;
        for( i = a; i <= b; i++ )
        {
            if( prime[i] == 1 )
                k++ ;
        }
        l = b - a + 1 ;
        printf("%.2lf\n", ( double(double(k)/double(l) ) * 100.0 + eps ) ) ;
    }
    return 0 ;
}



