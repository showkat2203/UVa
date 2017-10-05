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
    data ar[27] ;
    int a[27] ;
    int i, j, k, l, cell, CELL, cnt = 0, tst, t ;
    scanf("%d", &tst) ;
    for(t=1; t<=tst; t++)
    {
        scanf("%d %d",  &row, &col) ;
        memset(a, 0, sizeof a) ;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)  scanf(" %c", &state[i][j]) ;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(state[i][j] >= 'a' && state[i][j] <= 'z' )
                {
                    a[state[i][j] - 'a']++ ;
                    bfs( i, j, state[i][j] ) ;
                }
            }
        }
        for(i=0; i<26; i++)
            ar[i].b = 0 ;
        for(i=0; i<26; i++)
            ar[i].a = i + 97, ar[i].b = a[i] ;
        sort(ar, ar + 26, cmp );
        printf("World #%d\n", t) ;
        for(int i = 0; i < 26; i++)
            if( ar[i].b != 0 )
                printf("%c: %d\n", ar[i].a, ar[i].b);
    }
    return 0 ;
}


