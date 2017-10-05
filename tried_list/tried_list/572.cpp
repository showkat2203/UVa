#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
#include<set>
#define max 110

using namespace std;

char board[max][max];

int visited[max][max];
int cas = 0 ;
int cnt;
int i,j,tst,row,col;
void bfs(int i,int j)
{
    memset(visited,-1,sizeof(visited));
    queue <int > Q;
    Q.push(i);
    Q.push(j);
    int m,n,a,b,e,f;
    while(!Q.empty())
    {
        n = Q.front();Q.pop();
        m = Q.front();Q.pop();
        a = n - 1;
        b = m + 0;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n - 1;
        b = m + 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n + 0;
        b = m + 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n + 1;
        b = m + 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n + 1;
        b = m + 0;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n + 1;
        b = m - 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n + 0;
        b = m - 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
        a = n - 1;
        b = m - 1;
        if((a>=0&&a<row)&&(b>=0&&b<col))
        {
            if(board[a][b]=='@')
            {
                if(visited[a][b]==-1)
                {
                    visited[a][b]=0;
                    board[a][b] = '*';
                    Q.push(a);
                    Q.push(b);
                }
            }
        }
    }

}

int main()
{

    while(scanf("%d %d",&row,&col)==2 && row && col )
    {
        cnt = 0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf(" %c",&board[i][j]);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(board[i][j]=='@')
                {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}



