#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

char land[100][100], ans[100][100];

int i, j, k, l, m, n, row, col, po_r, po_c, tar_r, tar_c, visited[100][100] ;

int dir[] =  {-1,0,0};
int dir2[] = {0,-1,1};

void bfs(int r, int cl)
{
    memset(visited, -1, sizeof visited);
    queue < int > Q;
    int a, b, mov ;
    Q.push(r); Q.push(cl);

    mov = 0;
    while( !Q.empty() )
    {
        m = Q.front(); Q.pop();
        n = Q.front(); Q.pop();
        for(int c = 0; c<3; c++)
        {
            a = m + dir[c]; b = n + dir2[c];
            if(a >= 0 && a < row && b >=0 && b < col && visited[a][b] == -1)
            {
                if((land[a][b] == 'I' || land[a][b] == 'E' ||  land[a][b] == 'H' || land[a][b] == 'O' || land[a][b] == 'V' || land[a][b] == 'A'))
                {
                    visited[a][b] = 0;
                    Q.push(a); Q.push(b);
                    if(c == 0)
                        strcpy(ans[mov++], "forth");
                    else if( c == 1)
                        strcpy(ans[mov++], "left");
                    else
                        strcpy(ans[mov++], "right");
                }
                else if(land[a][b] == '#')
                {
                    visited[a][b] = 0;
                    if(c == 0)
                        strcpy(ans[mov++], "forth");
                    else if( c == 1)
                        strcpy(ans[mov++], "left");
                    else
                        strcpy(ans[mov++], "right");
                        c = 4;
                    while( !Q.empty() )
                        Q.pop();
                }
            }
        }
    }
    for(i =0; i<mov; i++)
    {
        if(i < mov - 1)
            printf("%s ",ans[i]);
        else
            printf("%s",ans[i]);
    }
    printf("\n");
}

int main()
{
    //freopen("10452.txt","r",stdin);
    int tst;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d %d",&row, &col);
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf(" %c",&land[i][j]);
               if( land[i][j] == '@' )
                {
                    tar_r = i;
                    tar_c = j;
                }
            }
        }
        bfs(tar_r, tar_c);
    }
    return 0;
}
