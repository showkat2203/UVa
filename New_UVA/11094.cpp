#include <bits/stdc++.h>

using namespace std ;

char board[30][30], cur;
int row, col ;
int vis[30][30] ;

int rr[4] = {-1,0,1,0};
int cc[4] = {0,1,0,-1};

int bfs(int i,int j)
{
    queue < int > q;
    int m, n, a, b, k, cnt = 0;
    q.push(i);
    q.push(j);
    vis[i][j] = 1;
    while(!q.empty())
    {
        m = q.front(), q.pop(), n = q.front(), q.pop();
        cnt++;
        for(k=0; k<4; k++)
        {
            a = m + rr[k];
            b = n + cc[k];
            if( b < 0)
                b = col - 1 ;
            else if(b >= col )
                b = 0;
            if( (a>=0 && a<row ) && (b>=0 && b<col) && board[a][b] == cur && vis[a][b] == 0)
            {
                vis[a][b] = 1;
                q.push(a);
                q.push(b);
            }
        }
    }
    return cnt;
}

int main()
{

    int i, j, k, res, cur_r, cur_c ;
    while(scanf("%d %d",&row, &col) == 2 )
    {
        memset(vis, 0, sizeof vis);
        for(i = 0; i < row ; i++)
            for(j = 0; j < col; j++)
                scanf(" %c",&board[i][j]);
        scanf("%d %d", &cur_r, &cur_c);
        cur = board[cur_r][cur_c];
        bfs(cur_r, cur_c);
        k = 0;
        for(i = 0; i < row ; i++)
            for(j = 0; j < col ; j++)
            {
                if( board[i][j] == cur && vis[i][j] == 0)
                    res = bfs(i,j);
                if(res > k )
                        k = res;
            }
        printf("%d\n", k);
    }
    return 0;
}
