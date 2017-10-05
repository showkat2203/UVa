#include <bits/stdc++.h>

using namespace std ;

int vis[15][15], a[15][15], i, j, k = 0 , l, sum, res[15], n ;

void bfs(int r)
{
    sum = 0 ;
    int daane_jabo, row, col ;
    daane_jabo = r ;
    while( daane_jabo < n )
    {
        if( vis[r][daane_jabo] == 0)
        {
            sum += a[r][daane_jabo] ;
            vis[r][daane_jabo] = 1 ;
        }
        daane_jabo++ ;
    }
    daane_jabo = r ;
    while( daane_jabo < n)
    {
        if( vis[daane_jabo][r] == 0)
        {
            sum += a[daane_jabo][r] ;
            vis[daane_jabo][r] = 1 ;
        }
        daane_jabo++;
    }
    daane_jabo = n - r - 1, row = r ;
    while( row < n )
    {
        if( vis[row][daane_jabo] == 0)
        {
            sum += a[row][daane_jabo] ;
            vis[row][daane_jabo] = 1 ;
        }
        row++;
    }
    daane_jabo = n - r - 1, col = r ;
    while( col < n )
    {
        if( vis[daane_jabo][col] == 0)
        {
            sum += a[daane_jabo][col] ;
            vis[daane_jabo][col] = 1 ;
        }
        col++ ;
    }
    if( sum != 0 )
        printf(" %d", sum) ;
}

int main()
{
    while( scanf("%d", &n) == 1 && n )
    {
        for( i = 0; i<n; i++)
            for( j = 0; j < n; j++)
                scanf(" %d", &a[i][j]);
        memset(vis, 0, sizeof vis);
        printf("Case %d:", ++k) ;
        for( i = 0; i<=n/2; i++)
            bfs(i) ;
        puts("") ;
    }
    return 0 ;
}
