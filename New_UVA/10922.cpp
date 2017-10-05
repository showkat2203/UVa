/*
    Sonnet
*/
#include <bits/stdc++.h>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }


#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define MEM(p, v) memset(p, v, sizeof(p))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define PB(x) push_back(x)
#define pii pair< int, int >
#define psi pair< string, int >

const double EPS = 1e-9;
const double BIG = 1e19;
const int INF = 0x7f7f7f7f;

int cnt ;

int rec(int n)
{
    if( n <= 9 )
    {
        return 1 ;
    }
    else
    {
        int sum = 0 ;
        while( n != 0 )
        {
            sum += ( n % 10 ) ;
            n /= 10 ;
        }
        cnt = rec(sum) + 1 ;
    }
    return cnt ;
}

int main()
{
    int i, j, k, sum, l, res ;
    char a[1010] ;
    while(gets(a) && strcmp(a, "0") != 0 )
    {
        cnt = 0 ;
        l = strlen(a) ;
        sum = 0 ;
        for( i = 0; i < l; i++ )  sum +=  ( a[i] - '0' ) ;
        if( sum % 9 != 0 )
        {
            printf("%s is not a multiple of 9.\n", a) ;
        }
        else
        {
            res = rec(sum) ;
            printf("%s is a multiple of 9 and has 9-degree %d.\n", a, res) ;
        }
    }
    return 0;
}

