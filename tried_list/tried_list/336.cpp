#include <bits/stdc++.h>

using namespace std;

int n, i, j, r, c, cas, cnt, l, k, m , node, cost, res ;
map < int , int > COST ;
map < int , int > :: iterator IT ;

map < int , vector < int > > My_map ;
map < int , vector < int > > :: iterator it ;

int bfs(int ND, int Cost )
{
    cnt = 0 ;
    queue < int > Q ;
    COST[ND] = 0 ;
    Q.push(ND) ;
    while( !Q.empty() )
    {
        m = Q.front() ;
        Q.pop() ;
        l = My_map[m].size();
        for(i=0; i<l; ++i)
        {
            k = My_map[m][i] ;
            if( COST[k] == -1 )
            {
                COST[k] = COST[m] + 1 ;
                Q.push(k) ;
            }
        }
    }
    for( IT = COST.begin(); IT != COST.end(); ++IT)
    {
        k = IT->second ;
        //printf("%d %d\n", IT->first, IT->second);
        if( k > Cost || k == -1 )
            cnt++;
    }
    return cnt ;
}

int main()
{
    //freopen("B.txt", "r", stdin ) ;
    int cs = 0 ;
    while( scanf("%d", &n) == 1 )
    {
        My_map.clear() ;
        if( n == 0 )
            break;
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &r, &c);
            My_map[r].push_back(c);
            My_map[c].push_back(r);
            COST[r] = -1, COST[c] = -1 ;
        }
        while( scanf("%d %d", &node, &cost) == 2 )
        {
            if( node == 0 && cost == 0 )
                break ;
            cnt = 0 ;
            res = bfs(node, cost);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cs, res, node, cost) ;
            for(IT = COST.begin(); IT != COST.end(); ++IT )
                IT->second = - 1;
        }
        COST.clear();
    }
    return 0;
}
