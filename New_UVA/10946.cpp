#include <bits/stdc++.h>

using namespace std ;

char a[550][550]  ;

int i, j, k, l, m, n, vis[550][550] ;

int rr[]= {0, 0, 1, -1};
int cc[]= {-1, 1, 0, 0};

struct ans
{
    char pos ;
    int how_much ;
} ;

ans ar[1001] ;

void bfs(int r, int C)
{
    int cnt = 1, b, kk, ll, c ;
    char ch = a[r][C] ;
    vis[r][C] = 1  ;
    a[r][C] = '.' ;
    queue < int > q ;
    q.push(r), q.push(C) ;
    while( !q.empty() )
    {
        b = q.front() , q.pop(), c = q.front(), q.pop();
        for( int jj = 0; jj < 4; jj++)
        {
            kk = b + rr[jj] , ll = c + cc[jj] ;
            if( vis[kk][ll] == 0 && kk >= 0 && kk < n && ll >= 0 && ll < m && a[kk][ll] == ch )
            {
                q.push(kk), q.push(ll);
                cnt++;
                vis[kk][ll] = 1;
                a[kk][ll] = '.' ;
            }
        }
    }
    ar[k].pos = ch, ar[k].how_much = cnt ;
    k++;
}

bool cmp(const ans &x, const ans &y)
{
    if(x.how_much > y.how_much) return true;
    else if(x.how_much == y.how_much)
        if( x.pos < y.pos )
            return true ;
    return false;
}

int main()
{
    int prblm = 0 ;
    while(scanf("%d %d", &n, &m) == 2 && n && m )
    {
        for( i = 0; i<n; i++)   for( j = 0; j<m; j++)   scanf(" %c", &a[i][j]) ;
        memset(vis, 0, sizeof vis) ;
        k = 0 ;
        for( i = 0; i<n; i++)
            for( j = 0; j<m; j++)
                if( isalpha(a[i][j]) )
                    bfs(i,j) ;
        sort(ar, ar + k, cmp) ;
        printf("Problem %d:\n", ++prblm) ;
        for( i = 0; i < k; i++ )
            printf("%c %d\n", ar[i].pos, ar[i].how_much) ;
    }
    return 0 ;
}
