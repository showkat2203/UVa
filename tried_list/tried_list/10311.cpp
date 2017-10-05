#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }

#define Maxi 100
#define sq sqrt(Maxi)


typedef long long ll ;

bool yes_no[Maxi] ;
int prime[6 * 1000000], sz = 0 ;

void seive()
{
    int i, j ;
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
    //sort(prime, prime + sz) ;
//    cout << sz << endl;
//    for( i = 0; i < 20; i++ )
//        printf("%d\n", prime[i]) ;
}


int main()
{


   // seive();
    vector < int > ve;
    ve.push_back(56);
    ve.push_back(5);
    ve.push_back(56);
    ve.push_back(57);
    ve.push_back(560000);
    map <int , int > mp;
    mp[25252] = 89;
    mp[252] = 55;
    mp[25] = 89;
    for(auto it = mp.begin() ; it != mp.end() ; ++it)
    {

        cout << it->first << " " << it->second << endl;
    }
    for(auto x : ve) cout << x  << " " ;
    int f, num, n, i, k  ;
    while( scanf("%d", &num) == 1 )
    {
        f = 0 ;
        for( i = 0; i < sz ; i++ )
        {
            if( prime[i] > num / 2 )
                break ;
            k = num - prime[i] ;
            if( !yes_no[k] )
            {
                n = prime[i] ;
                f = 1 ;
                break ;
            }
//            printf("--");
        }
        if( f != 0 )
             printf("%d is the sum of %d and %d.\n", num, n, k ) ;
        else
            printf("%d is not the sum of two primes!\n", num );
    }
    return 0 ;
}


