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


typedef long long ll ;

bool yes_no[Maxi] ;
ll prime[800005], tot[800010] ,sz = 0 ;

map < int , int > mp ;
map < int , int > :: iterator it ;

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
    int n, i, tst, j, k, l, r, res, chk, ans ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d %d", &l, &r) ;
        k = 0 ;
        for( i = 0; i < sz && prime[i] <= r ; i++ )
        {
            if( prime[i] >= l && prime[i] <= r )
                tot[k++] = prime[i] ;
        }
//        for( i = 0; i < k ; i++ )
//            printf("%d\n", tot[i]) ;
//        puts("") ;
        for( i = 0; i < k - 1 ; i++ )
        {
            j = abs(tot[i] - tot[i+1] ) ;
            mp[j]++;
        }
        res = 0 , chk = 0 ;
//        bool fl = false ;
//        for( it = mp.begin(); it != mp.end(); it++ )
//        {
//            printf("%d %d\n", it->first, it->second) ;
//        }
//        puts("") ;
        for( it = mp.begin(); it != mp.end(); it++ )
            if( res < it->second )
            {
                ans = it->first ;
                res = it->second ;
            }

        for( it = mp.begin(); it != mp.end(); it++ )
            if( res == it->second )
                chk++ ;
        if( chk > 1 )
            res = 0 ;

        if( res == 0 )
            puts("No jumping champion") ;
        else
            printf("The jumping champion is %d\n", ans) ;
        mp.clear() ;
    }
    return 0 ;
}
