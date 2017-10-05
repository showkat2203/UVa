#include <bits/stdc++.h>

using namespace std ;

map < int, vector < int > > mp ;
map < int, vector < int > > :: iterator it ;

map < int, int > cost ;
int vis[30] ;

int bfs(int strt)
{
    memset(vis, 0, sizeof vis) ;
    queue < int > q ;
    cost[strt] = 0 ;
    q.push(strt) ;
    int m, n ;
    int i ;
    while( !q.empty() )
    {
        m = q.front(), q.pop() ;
        for( i = 0; i < mp[m].size(); i++)
        {
            n = mp[m][i] ;
            if( vis[n] == 0 )
            {
                cost[n] = cost[m] + 1 ;
                q.push(n) ;
                vis[n] = 1 ;
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, k, a, b, strt, End, how, cnt = 0 ;
    while ( scanf("%d", &a) != EOF )
    {
        how = 1 ;
        for( i = 0; i < a; i++)
        {
            scanf("%d", &b) ;
            mp[how].push_back(b) ;
            mp[b].push_back(how) ;
        }
        how++;
        for( i = 2; i <= 19; i++)
        {
            scanf("%d", &a) ;
            while(a--)
            {
                scanf("%d", &b) ;
                mp[how].push_back(b) ;
                mp[b].push_back(how) ;
            }
            how++ ;
        }
        cost.clear() ;
        scanf("%d", &a) ;
        printf("Test Set #%d\n",++cnt) ;
        while(a--)
        {
            scanf("%d %d", &strt, &End) ;
            cost.clear() ;
            bfs(strt) ;
            printf("%2d to %2d: %d\n", strt, End, cost[End]) ;
        }
        mp.clear() ;
        puts("") ;
//        for( it = mp.begin(); it != mp.end(); ++it)
//        {
//            printf("%d -> ", it->first ) ;
//            for( i = 0; i < mp[it->first].size(); ++i)
//            {
//                printf("%d ", mp[it->first][i]) ;
//            }
//            puts("") ;
//        }
    }
    return 0 ;
}

/*
#include <bits/stdc++.h>

using namespace std ;

map < int, vector < int > > mp ;
map < int, vector < int > > :: iterator it ;

map < int, int > cost ;
int vis[30] ;

int bfs(int strt)
{
    memset(vis, 0, sizeof vis) ;
    queue < int > q ;
    cost[strt] = 0 ;
    q.push(strt) ;
    int m, n ;
    int i ;
    while( !q.empty() )
    {
        m = q.front(), q.pop() ;
        for( i = 0; i < mp[m].size(); i++)
        {
            n = mp[m][i] ;
            if( vis[n] == 0 )
            {
                cost[n] = cost[m] + 1 ;
                q.push(n) ;
                vis[n] = 1 ;
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, k, a, b, strt, End, how, cnt = 0 ;
    while ( scanf("%d", &a) != EOF )
    {
        how = 1 ;
        for( i = 0; i < a; i++)
        {
            scanf("%d", &b) ;
            mp[how].push_back(b) ;
            mp[b].push_back(how) ;
        }
        how++;
        for( i = 2; i <= 19; i++)
        {
            scanf("%d", &a) ;
            while(a--)
            {
                scanf("%d", &b) ;
                mp[how].push_back(b) ;
                mp[b].push_back(how) ;
            }
            how++ ;
        }
        cost.clear() ;
        scanf("%d", &a) ;
        printf("Test Set #%d\n",++cnt) ;
        while(a--)
        {
            scanf("%d %d", &strt, &End) ;
            cost.clear() ;
            bfs(strt) ;
            printf("%2d to %2d: %d\n", strt, End, cost[End]) ;
        }
        mp.clear() ;
        puts("") ;
//        for( it = mp.begin(); it != mp.end(); ++it)
//        {
//            printf("%d -> ", it->first ) ;
//            for( i = 0; i < mp[it->first].size(); ++i)
//            {
//                printf("%d ", mp[it->first][i]) ;
//            }
//            puts("") ;
//        }
    }
    return 0 ;
}


*/
