#include <bits/stdc++.h>

typedef long long ll ;

using namespace std;

int dp[25][5050], pres[5500], path[25][5050], j, n ;

int call(int i, int s)
{
    if( i == j )
        return 0 ;
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    int fst = 0, scnd = 0 ;
    if( s + pres[i] <= n )
        fst = pres[i] + call( i + 1, s + pres[i]) ;
    scnd = call( i + 1 , s ) ;
    if( fst > scnd )
        path[i][s] = 1 ;
    else
        path[i][s] = 2 ;
    return dp[i][s] = max( fst, scnd ) ;
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int i, k, m ;
    while( scanf("%d %d", &n, &j) == 2 )
    {
        for( i = 0; i < j; i++ )
            scanf("%d", &pres[i]) ;
        memset(dp, -1, sizeof dp) ;
        memset(path, 0, sizeof path) ;
        m = call(0, 0) ;
        k = 0 ;
        for( i = 0; i < j; i++ )
        {
            if( path[i][k] == 1 )
            {
                printf("%d ", pres[i]) ;
                k += pres[i] ;
            }
        }
        printf("sum:%d\n", m) ;
    }
    return 0 ;
}

