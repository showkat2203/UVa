#include<bits/stdc++.h>

using namespace std ;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

typedef long long ll ;

#define Maxi 1000005
#define sq sqrt(Maxi)

bool yes_no[Maxi] ;
ll prime[50000] , sz = 0 ;

ll LCM[Maxi] ;



//void seive()
//{
//    int n, i, j ;
//    memset( yes_no, false, sizeof yes_no ) ;
//    yes_no[0] = yes_no[1] = true ;
//    yes_no[2] = false ;
//    prime[sz++] = 2;
//    for( i = 4; i <= Maxi; i+= 2)
//        yes_no[i] = true ;
//    for( i = 3; i <= sq; i += 2 )
//        if( yes_no[i] == false )
//            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
//                yes_no[j] = true ;
//
//    for( i = 3; i <= Maxi; i += 2 )
//        if( yes_no[i] == false )
//            prime[sz++] = i ;
//
//}


int main()
{
    ll n, i, j, k ;
    LCM[1] = 1 ;
    for( i = 2; i < Maxi; i++ )
    {
        LCM[i] = lcm(i, LCM[i-1]) ;
    }
    while( scanf("%d", &n) == 1 && n )
    {
        k = LCM[n] ;
        while( k % 10 == 0 )
        {
            k = k % 10 ;
        }
        printf("%lld\n", k % 10) ;
    }
    return 0;
}
