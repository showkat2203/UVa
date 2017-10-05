#include <bits/stdc++.h>

using namespace std;

int dir[]   = {0, -1, 0, 1} ;
int dir2[]  = {-1, 0, 1, 0} ;
int visited[110][110] , row, col ;
char state[1101][1101] ;

void bfs(int r, int c, char ch )
{
    memset(visited,-1,sizeof(visited));
    int m, n, a, b, cnt = 1 ;
    queue < int > q ;
    q.push(r), q.push(c);
    while( !q.empty() )
    {
        m = q.front(), q.pop(), n = q.front(), q.pop() ;
        for(int i = 0; i<4; i++)
        {
            a = m + dir[i], b = n + dir2[i] ;
            if( a >=0 && a < row && b >= 0 && b < col && visited[a][b] == -1 && state[a][b] != ch )
            {
                cnt++ ;
                q.push(a), q.push(b) , visited[a][b] = 0, state[a][b] = ch ;
            }
        }
    }
}

int main()
{
    int a[27] ;
    int i, j, k, l, cell, CELL, cnt = 0, tst, t, b, d ;
    while(scanf("%d %d",  &row, &col) == 2)
    {
        memset(a, 0, sizeof a) ;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)  scanf(" %c", &state[i][j]) ;
        scanf("%d %d", &b, &d) ;
        for(i=0; i<row; i++)
        {
            for(j = 0; j<col; j++)
            {
                if( state[i][j] != state[b-1][d-1] )
                {
                    cnt++ ;
                    bfs( i, j, state[b-1][d-1] )  ;
                }
            }
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}
