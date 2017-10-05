#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, i, j, k, d ;
    while ( scanf("%lld", &n) == 1)
    {
        m = n ;
        j = 0 ;
        while( n != 0 )
        {
            j = j * 10 + ( n % 10);
            n /= 10 ;
        }
        d = m - j ;
        k = d / 9 ;
        printf("%lld - %lld = %lld = 9 * %lld\n", m, j, d, k );
    }
    return 0 ;
}
