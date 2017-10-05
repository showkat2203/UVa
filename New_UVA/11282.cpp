#include <bits/stdc++.h>


using namespace std ;

int dp[25] ;

int dearrangement(int n)
{
    if( n == 1 || n == 0 )
        return 0 ;
    if( n == 2 )
        return 1 ;
    if( dp[n] != - 1 )
        return dp[n] ;
    return dp[n] =  ( ( n - 1 ) * dearrangement( n - 1 ) + ( n - 1 ) *(  dearrangement( n - 2 ) ) ) ;
}


int main()
{
    int m, n, res, diff ;
    while( scanf("%d %d", &n, &m) == 2 )
    {
        memset(dp, -1, sizeof dp ) ;
        diff = dearrangement(n) ;
        memset(dp, -1, sizeof dp ) ;
        m = dearrangement( m ) ;
        printf("%d %d\n", diff, m ) ;
    }
    return 0 ;
}
