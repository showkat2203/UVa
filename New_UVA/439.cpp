#include <bits/stdc++.h>

using namespace std ;

int vis[10][10], cost[10][10] ;
int rr[]={1,1,2,2,-1,-1,-2,-2};
int cc[]={2,-2,1,-1,2,-2,1,-1};

void bfs(int r, int c,int dr, int dc)
{
    queue < int > q ;
    q.push(r), q.push(c) ;
    int m, n, a, b,  i ;
    memset(vis, 0, sizeof vis) ;
    memset(cost, 0, sizeof cost) ;
    vis[r][c] = 1 ;
    while( !q.empty() )
    {
        m = q.front(), q.pop(), n = q.front(), q.pop() ;
        for( i = 0; i < 8; i++)
        {
            a = m + rr[i], b = n + cc[i] ;
            if( a >= 1 && a <= 8 && b >= 1 && b <= 8 )
            {
                if( vis[a][b] == 0)
                {
                    cost[a][b] = cost[m][n] + 1 ;
                    vis[a][b] = 1 ;
                    q.push(a), q.push(b) ;
                    if( a == dr && b == dc)
                    {
                        while( !q.empty() )
                            q.pop() ;
                    }
                }
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin ) ;
    int r, c, dr, dc, i, j  ;
    char a[3], b[3] ;
    while ( scanf("%s %s", &a, &b) == 2)
    {
        c = ( a[0] - 'a' ) + 1 , r = a[1] - '0' ;
        dc = ( b[0] - 'a' ) + 1 , dr = b[1] - '0' ;
        memset(cost, 0, sizeof cost) ;
        bfs(r, c, dr, dc) ;
        printf("To get from %s to %s takes %d knight moves.\n", a, b, cost[dr][dc]);
    }
    return 0 ;
}
