#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int land[100][100];
char a[5] ,ch ;
int visited[100], i, j, k, l, m, cnt, row, col, n;

void bfs(int r)
{
    visited[r] = 1;
    queue < int > Q;
    Q.push(r);
    while( !Q.empty() )
    {
        m = Q.front(); Q.pop();
        for(k=0; k<=row; k++)
        {
            if(land[m][k] == 1 && visited[k] == 0)
            {
                Q.push(k);
                visited[k] = 1;
            }
        }
    }
}

int main()
{
    //freopen("459.txt","r",stdin);
    int tst, tot = 0;;
    scanf("%d",&tst);
    getchar();
    getchar();
    while(tst--)
    {

        cnt = 0;
        gets(a);
        memset(visited , 0, sizeof visited);
        row = a[0] - 65;
        for(i=0; i<=row; i++)
        {
            for(j=0; j<=row; j++)
                land[i][j] = 0;
        }
        while( gets(a) && a[0] != NULL )
        {

            m = a[0] - 65;
            n = a[1] - 65;
            land[m][n] = 1;
            land[n][m] = 1;
        }
        for(i=0; i<=row; i++)
        {
            if( visited[i] == 0 )
            {
                cnt++;
                bfs(i);
            }
        }
        if(tot != 0)
            printf("\n");
        tot++;
        printf("%d\n",cnt);
    }
    return 0;
}
