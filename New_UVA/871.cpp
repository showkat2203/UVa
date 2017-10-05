#include <bits/stdc++.h>

using namespace std ;

char board[50][50], a[50] ;
int vis[50][50], m, n, row, col, ans[50], k ;

int rr[]= {1,1,0,-1,-1,-1,0,1};
int cc[]= {0,1,1,1,0,-1,-1,-1};

void bfs(int R, int C)
{
    queue < int > q ;
    int b, c, cnt = 1, pp  ;
    q.push(R), q.push(C) ;
    vis[R][C] = 1, board[R][C] = '0' ;
    while( !q.empty() )
    {
        m = q.front(), q.pop(), n = q.front(), q.pop() ;
        for( pp = 0; pp < 8; pp++ )
        {
            b = m + rr[pp], c = n + cc[pp] ;
            if( b >= 0 && b < row && c >= 0 && c < col )
            {
                if( vis[b][c] == 0 && board[b][c] == '1')
                {
                    cnt++;
                    board[b][c] = '0' ;
                    vis[b][c] = 1 ;
                    q.push(b), q.push(c) ;
                }
            }
        }
    }
    ans[k++] = cnt ;
}


int main()
{
    //freopen("in.txt", "r", stdin) ;
    int tst, i, j, l, cas = 0 ;
    scanf("%d", &tst);
    getchar() ;
    getchar() ;
    while(tst--)
    {
        row = 0;
        col = 0 ;
        memset(board, '0', sizeof board) ;
        memset(ans, 0, sizeof ans) ;
        while( gets(a) && a[0] != NULL )
        {
            l = strlen(a);
            col = max(col, l) ;
            strcpy(board[row++], a) ;
        }
        if( cas != 0 )
            printf("\n");
        cas++;
        memset(vis, 0, sizeof vis) ;
        k = 0 ;
        for(i = 0; i<row; i++)
            for( j = 0; j < col; j++)
                if( board[i][j] == '1' )
                    bfs(i,j) ;
        sort( ans, ans + k) ;
        if( k == 0 )
            printf("%d\n", ans[k]) ;
        else
            printf("%d\n", ans[k-1]) ;
    }
    return 0 ;
}
