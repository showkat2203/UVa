#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

char land[110][110], in[110];

int k, i, j, cnt , visited[110][110], r, c ;
int dir[] =  {-1, 0,   1, -1, 1, -1, 0, 1};
int dir2[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int test, rows, cols, rp, cp;

void bfs ( int row, int col )
{
    memset(visited, -1, sizeof visited);
    visited[row][col] = 0;
    cnt = 1;
    queue < int > Q;
    Q.push(row); Q.push(col);
    int n , m, a, b;
    while(!Q.empty())
    {
        m = Q.front(); Q.pop();
        n = Q.front(); Q.pop();
        for(int i=0; i<8; i++)
        {
            a = m + dir[i];
            b = n + dir2[i];
            if(a >= 0 && a < rows && b>=0 && b < cols && land[a][b] == 'W' && visited[a][b] == -1 )
            {
                cnt++;
                visited[a][b] = 0;
                Q.push(a);
                Q.push(b);
            }
        }
    }
    //if()
    printf("%d\n",cnt);
}

int main()
{
    //freopen("469.txt","r",stdin);
    int tot = 0;
    scanf("%d",&test);
    getchar(); getchar();
    while (test--)
    {
        cols = 0;
        if(tot != 0)
            printf("\n");
        tot++;
        i = 0;
        cnt = 0;
        memset(land, 'H', sizeof land);
        while (gets(in) && strlen(in) > 0)
        {
            if (in[0] == 'L' || in[0] == 'W')
            {
                strcpy(land[i++],in);
                cols = strlen(in);
                rows = i;
            }
            else
            {
                //for(int dot = 0; dot<rows; dot++)  printf("%s\n",land[dot]);
                sscanf(in,"%d %d",&rp, &cp);
                if(land[rp - 1][cp - 1] == 'L' || land[rp - 1][cp - 1] != 'W' )
                    puts("0");
                else if (land[rp - 1][cp - 1] == 'W')
                {
                    cnt = 1;
                    bfs(rp - 1, cp - 1);
                }
                else
                    puts("0");
            }
        }
    }
    return 0;
}
