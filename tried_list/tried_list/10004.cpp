#include <bits/stdc++.h>

using namespace std;

int n, r, c, R, C, vis[210], m, M, N , i, j, l, k, f ;
int color[210]  ;

map <int , vector < int > > M_map  ;
map <int , vector < int > > :: iterator it ;

void bfs( int row )
{
    queue < int > q;
    f = 0 ;
    memset(vis, -1, sizeof vis );
    memset(color, 0, sizeof color );
    q.push(row) ;
    color[row] = 1 ;
    vis[row] = 0 ;
    while( !q.empty() )
    {
        m = q.front(), q.pop();
        C = color[m] ;
        l = M_map[m].size() ;
        for( i=0; i<l; ++i )
        {
            k = M_map[m][i];
            if( color[k] == 0 )
            {
                if( C == 1 )
                    color[k] = 2;
                else
                    color[k] = 1 ;
                q.push(k);
            }
            else
            {
                if( color[k] == C )
                {
                    f = 1;
                    break;
                }
            }
        }
    }
    if( f == 0 )
        puts("BICOLORABLE.");
    else
        puts("NOT BICOLORABLE.");
}

int main()
{
    while( scanf("%d", &n) == 1 )
    {
        if( n == 0 )
            break;
        scanf("%d", &N);
        for(i=0; i<N; i++)
        {
            scanf("%d %d",&r, &c);
            M_map[r].push_back(c);
            M_map[c].push_back(r);
        }
        bfs(0);
        M_map.clear() ;
    }
    return 0;
}

