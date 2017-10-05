#include <bits/stdc++.h>

using namespace std ;

map < string , int > creating_node ;
string dictionary[25500] ;
vector < int > graph[25500] ;
int color[25500], cost[25500], parent[25500] ;

bool check(string a, string b)
{
    int cnt = 0, i ;
    if( a.length() == b.length() )
    {
        for( i = 0; i < a.length(); ++i)
            if( a[i] != b[i] )
                cnt++;
        if( cnt > 1 )
            return false ;
        return true ;
    }
    return false ;
}

void BFS(int strt, int des)
{
    memset(color, 0, sizeof color) ;
    memset(cost, -1, sizeof cost ) ;
    queue < int > q ;
    while( !q.empty() )
        q.pop() ;
    q.push(strt) ;
    parent[strt] = strt ;
    int m, n, i ;
    cost[strt] = 0 , color[strt] = 1 ;
    while( !q.empty() )
    {
        m = q.front(), q.pop() ;
        for( i = 0; i < graph[m].size(); i++)
        {
            n = graph[m][i] ;
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

int main()
{
    //freopen("in.txt", "r", stdin) ;
    char wor[30], a[30], b[30], c[30] ;
    string first, last, aa  ;
    int numbering = 0, sz = 0, i, j, k, l ;
    while( gets(wor) && wor[0] != NULL )
    {
        aa = wor ;
        if( creating_node.find(aa) == creating_node.end() )
        {
            creating_node[aa] = numbering++;
            dictionary[sz++] = aa ;
        }
    }
    for( i = 0; i < sz - 1 ; i++ )
    {
        for( j = i + 1 ; j < sz; j++ )
        {
            if( check(dictionary[i], dictionary[j]) )
            {
                k = creating_node[dictionary[i]] , l = creating_node[dictionary[j]] ;
                graph[k].push_back(l) , graph[l].push_back(k) ;
            }
        }
    }
    int strt, des, cnt = 0 ;
    while(gets(a) && a[0] != NULL )
    {
        sscanf(a, "%s %s", b, c);
        first = b, last = c ;
        strt = creating_node[b], des = creating_node[c] ;
        if( cnt )
            puts("") ;
        ++cnt ;
        if( first.size() != last.size() )
            printf("No solution.\n") ;
        else
        {
            BFS(strt, des) ;
            if( cost[des] == -1 )
                printf("No solution.\n") ;
            else
            {
                int cas = cost[des] + 1, loc ;
                stack < int > path ;
                while(cas--)
                {
                    path.push(des);
                    des = parent[des];
                }
                while(!path.empty())
                {
                    loc = path.top();
                    path.pop();
                    printf("%s\n",dictionary[loc].c_str());
                }
            }
        }
    }
    return 0 ;
}

