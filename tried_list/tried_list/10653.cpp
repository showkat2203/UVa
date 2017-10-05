#include<bits/stdc++.h>

using namespace std;

int graph[1010][1010], visited[1010][1010],cost[1010][1010];
int dir[]  = {1,-1,0,0};
int dir2[] = {0,0,1,-1};
int d_c,d_r, s_c, s_r, node, r, k, i, j, m, n, a, b, row, col, c ;

void bfs(int R,int C)
{
    memset(visited, 0, sizeof visited ) ;
    memset(cost, 0,sizeof cost );
    queue <int> Q ;
    Q.push(R);
    Q.push(C);
    visited[R][C] = 1;
    cost[R][C] = 0;
    while( !Q.empty() )
    {
        m = Q.front(), Q.pop(), n = Q.front(), Q.pop();
        for(i=0; i<4; i++)
        {
            a = m + dir[i] ;
            b = n + dir2[i] ;
            if( a>=0 && a<row && b>=0 && b<col && graph[a][b] != 1 )
            {
                if( visited[a][b] == 0)
                {
                    visited[a][b] = 1 ;
                    cost[a][b] = cost[m][n] + 1;
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
    }
}


int main()
{
    while( scanf("%d %d", &row, &col) == 2 && row && col )
    {
        scanf("%d",&node);
        memset(graph,0, sizeof graph);
        while(node--)
        {
            scanf("%d %d",&r,&k);
            while(k--)
            {
                scanf("%d",&c);
                graph[r][c] = 1 ;
            }
        }
        scanf("%d %d %d %d",&s_r,&s_c, &d_r,&d_c );
        bfs(s_r,s_c);
        printf("%d\n",cost[d_r][d_c]);
    }
    return 0;
}
