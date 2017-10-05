#include <bits/stdc++.h>

using namespace std;

int tst, i, j, k , l , m, n , A, B, b , r, c, k_r, k_c, B_r, B_c, cnt, cost[110][110] ;
int dir_K[] = { -2, -1, 1, 2, -2, -1, 1, 2 } ;
int dir_k[] = { -1, -2, -2, -1, 1, 2, 2, 1 } ;
int dir[] =  { -1, 0, 1, 0, -1, -1, 1, 1 };
int dir2[] = { 0, 1, 0, -1, -1, 1, 1, -1 };
int visited[110][110] ;
char a[110][110] ;

void bfs(int R, int C)
{
    queue < int > q;
    memset(visited, 0, sizeof visited );
    visited[R][C] = 1 ;
    memset(cost, 0, sizeof cost ) ;
    q.push(R), q.push(C) ;
    while( !q.empty() )
    {
        m = q.front(); q.pop();
        n = q.front(); q.pop();
        for(k=0; k<8; k++)
        {
            A = m +  dir[k];
            B = n + dir2[k];
            if( ( A>=0 && A<r && B>=0 && B<c && visited[A][B] == 0) && ( a[A][B] == '.' ||  a[A][B] == 'B' ) )
            {
                visited[A][B] = 1;
                cost[A][B] = cost[m][n] + 1 ;
                q.push(A) , q.push(B) ;
            }
        }
    }
}

int main()
{
    int vis[110][110] ;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d", &r, &c);
        cnt = 0;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf(" %c", &a[i][j]);
                if( a[i][j] == 'B')
                {
                    B_r = i ;
                    B_c = j ;
                }
                else if( a[i][j] == 'A' )
                {
                    k_r = i ;
                    k_c = j ;
                }

            }
        }
        memset(vis, 0, sizeof vis);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(a[i][j] == 'Z')
                {
                    for(k=0; k<8; k++)
                    {
                        m = i +  dir_K[k]; n = j + dir_k[k];
                        if( m >=0 && m<r && n>=0 && n<c  && a[m][n] == '.' && vis[m][n] == 0)
                        {
                            a[m][n] = 'z';
                            vis[m][n] = 1;
                        }
                    }
                }
            }
        }
        bfs(k_r, k_c) ;
        if( cost[B_r][B_c] == 0 )
            puts("King Peter, you can't go now!");
        else
            printf("Minimal possible length of a trip is %d\n", cost[B_r][B_c]);
    }
    return 0;
}
