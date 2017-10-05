#include <cstdio>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

char land[100][100];
int visited[100][100], i, j, k, l, row, col, point, cnt, loop, tot ;

void bfs(int r, int c)
{
    memset( visited , 0, sizeof visited );
    int m , n , a, b;
    tot = loop = cnt  = 0;
    queue < int > Q;
    Q.push(r); Q.push(c);
    cnt = 0;
    while( !Q.empty() )
    {
        m = Q.front(); Q.pop();
        n = Q.front(); Q.pop();
        a = m ; b = n ;
        if(land[a][b] == 'N' )
        {
            if((a >=0 && a<row && b>=0 && b< col))
            {

                if( visited[a][b] > 1 )
                {
                    visited[a][b] += 1;
                    while( !Q.empty() )
                        Q.pop();
                }
                else
                {
                    if(visited[a][b] == 0)
                        cnt++;
                    visited[a][b] += 1;
                    a = m - 1; b = n;
                    Q.push(a); Q.push(b);
                }
            }
        }
        else if(land[a][b] == 'S' )
        {
            if((a >=0 && a<row && b>=0 && b< col))
            {

                if( visited[a][b] > 1 )
                {
                    visited[a][b] += 1;
                    while( !Q.empty() )
                        Q.pop();
                }
                else
                {
                    if(visited[a][b] == 0)
                        cnt++;
                    visited[a][b] += 1;
                    a = m + 1; b = n;
                    Q.push(a); Q.push(b);
                }
            }
        }
        else if(land[a][b] == 'E' )
        {
            if((a >=0 && a<row && b>=0 && b< col))
            {

                if( visited[a][b] > 1)
                {

                    visited[a][b] += 1;
                    while( !Q.empty() )
                        Q.pop();
                }
                else
                {
                    if(visited[a][b] == 0)
                        cnt++;
                    visited[a][b] += 1;
                    a = m ; b = n + 1;
                    Q.push(a); Q.push(b);
                }
            }
        }
        else if(land[a][b] == 'W' )
        {
            if((a >=0 && a<row && b>=0 && b< col))
            {
                if(visited[a][b] > 1 )
                {
                    visited[a][b] += 1;
                    while( !Q.empty() )
                        Q.pop();
                }
                else
                {
                    if( visited[a][b] == 0 )
                        cnt++;
                    visited[a][b] += 1;
                    a = m ; b = n - 1;
                    Q.push(a); Q.push(b);
                }
            }
        }
    }
    for(i=0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            if( visited[i][j] > 1)
                tot++;
    }
    cnt -= tot;
    if( tot == 0 )    printf("%d step(s) to exit\n",cnt);

    else        printf("%d step(s) before a loop of %d step(s)\n",cnt,tot);

}

int main()
{
    //freopen("10116.txt","r", stdin);
    while( scanf("%d %d %d",&row, &col, &point) == 3 && row && col && point )
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)  scanf(" %c",&land[i][j]);
        }
        bfs(0, point - 1);
    }
    return 0;
}
