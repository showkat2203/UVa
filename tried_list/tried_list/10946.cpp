#include <bits/stdc++.h>

using namespace std;

int dir[]   = {0, -1, 0, 1} ;
int dir2[]  = {-1, 0, 1, 0} ;
int visited[110][110] , row, col ;
char state[1101][1101] ;

void bfs(int r, int c, char ch )
{
    memset(visited,-1,sizeof(visited));
    int m, n, a, b ;
    queue < int > q ;
    q.push(r), q.push(c);
    while( !q.empty() )
    {
        m = q.front(), q.pop(), n = q.front(), q.pop() ;
        for(int i = 0; i<4; i++)
        {
            a = m + dir[i], b = n + dir2[i] ;
            if( a >=0 && a < row && b >= 0 && b < col && visited[a][b] == -1 && state[a][b] == ch )
            {
                q.push(a), q.push(b) , visited[a][b] = 0, state[a][b] = '0' ;
            }
        }
    }
}

struct data
{
    char a ;
    int b ;
};

bool cmp(const data &x , const data &y)
{
    if(x.b > y.b) return true;
    else if(x.b == y.b)
        if(x.a < y.a) return true;
    return false;
}

int main()
{
    int i, j, k, l, f, r, c, cell, CELL, cnt = 0 ;
    while( scanf("%d %d",  &r, &c) == 2 && r && c)
    {
        for(i=0; i<r; i++)
            for(j=0; j<c; j++)  scanf(" %c", &state[i][j]) ;
    }
    return 0 ;
}

