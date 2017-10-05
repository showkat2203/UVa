#include <bits/stdc++.h>

using namespace std ;

map < string, vector < string > > mp ;
map < string, vector < string > > :: iterator it ;
map < string, int > color, cost ;
map < string, int > :: iterator ITT ;
map < string , string > parent ;
map < string , string > :: iterator ITTT ;

void bfs(string strt, string des)
{
    queue < string > q ;
    while( !q.empty() )
        q.pop() ;
    q.push(strt) ;
    parent[strt] = "." ;
    string m, n ;
    int i ;
    cost[strt] = 0 , color[strt] = 1 ;
    while( !q.empty() )
    {
        m = q.front(), q.pop() ;
        for( i = 0; i < mp[m].size(); i++)
        {
            n = mp[m][i] ;
            if( color[n] == 0 )
            {
                color[n] = 1 ;
                cost[n] = cost[m] + 1 ;
                parent[n] = m ;
                q.push(n) ;
                if( n == des )
                {
                    return ;
                }
            }
        }
    }
    return ;
}

void path_print(string des)
{
    if( parent[des] == ".")
        return ;
    string res = parent[des] ;
    path_print(res);
    cout << parent[des] << " " << des << endl;
}


int main()
{
    //freopen("in.txt", "r", stdin) ;
    int n,  i, j, cnt = 0 ;
    string akjaiga , arekjaiga, strt, des  ;
    while(scanf("%d", &n) == 1)
    {
        getchar() ;
        while(n--)
        {
            cin >> akjaiga >> arekjaiga  ;
            mp[akjaiga].push_back(arekjaiga) ;
            mp[arekjaiga].push_back(akjaiga) ;
            color[akjaiga] = 0; color[arekjaiga] = 0 ;
            cost[akjaiga] = -1; cost[arekjaiga] = -1 ;
        }
        cin >> strt >> des ;
        if( cnt != 0 )
            puts("") ;
        ++cnt;
        cost[strt] = 0, cost[des] = 0, color[strt] = 0, color[des] = 0  ;
        for( ITT = cost.begin(); ITT != cost.end(); ITT++)  ITT->second = -1 ;
        //for( ITT = cost.begin(); ITT != cost.end(); ITT++)  printf("%s %d\n", ITT->first.c_str(), ITT->second) ;
        for( ITT = color.begin(); ITT != color.end(); ITT++)  ITT->second = 0 ;
        bfs(strt, des) ;
        if( cost[des] == -1 )
        {
            puts("No route") ;
        }
        else
        {
            path_print(des) ;
        }
        color.clear(), cost.clear(), mp.clear() ;
    }
    return 0;
}
