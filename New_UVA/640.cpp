#include <bits/stdc++.h>

using namespace std ;

long long n, j, k, l, i, m, sum = 0, a[1000100] ;

int main()
{

    memset(a, 0, sizeof a) ;
    for( i = 1; i <= 1000100; i++ )
    {
        n = i ;
        m = n ;
        sum = 0 ;
        while( n != 0 )
        {
            sum = sum + n % 10 ;
            n /= 10 ;
        }
        //printf("%lld\n", )

        a[sum + i] = 1 ;
    }
    for( i = 1; i<=1000000; i++)
    {
        if( a[i] == 0 )
            printf("%lld\n", i) ;
    }
    return 0 ;
}

