#include <bits/stdc++.h>

using namespace std ;

int dp[1100][1100], i, j, k, l, m, n;
char TOW[1100], tow[1100]  ;

int main()
{
    while( gets(TOW) )
    {
        gets(tow) ;
        n = strlen(TOW) , m = strlen(tow) ;
        memset(dp, 0, sizeof dp);
        for( i = 1; i<=n; i++ )
            for( j = 1; j<=m; j++ )
            {
                if( TOW[i-1] == tow[j-1] )
                    dp[i][j] = dp[i-1][j-1] + 1 ;
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]) ;
            }
        printf("%d\n",dp[n][m]) ;
    }
    return 0 ;
}

