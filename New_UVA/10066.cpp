#include <bits/stdc++.h>

using namespace std ;

int dp[110][110], i, j, k, l, m, n, TOW[110], tow[110] ;
char ans[110][110] ;

int main()
{
    int cnt = 0 ;
    while(scanf("%d %d", &n, &m) == 2 && n && m)
    {
        for( i = 1; i<=n; i++)
            scanf("%d", &TOW[i]);

        for( i = 1; i<=m; i++)
            scanf("%d", &tow[i]);

        for( i = 0; i<=n; i++)
            for( j = 0; j<=m; j++)
                dp[i][j] = 0 ;

        for( i = 1; i<=n; i++ )
            for( j = 1; j<=m; j++ )
            {
                if( TOW[i] == tow[j] )
                    dp[i][j] = dp[i-1][j-1] + 1 ;
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]) ;
            }
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", ++cnt, dp[n][m]) ;
    }
    return 0 ;
}
