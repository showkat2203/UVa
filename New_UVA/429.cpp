#include <bits/stdc++.h>

using namespace std ;

map < string, vector < string > > mp ;
//map < string, vector < string > > :: iterator it ;
vector < string > v ;
map < string ,  int > cost ;

void bfs(string a)
{
    queue < string > q ;
    cost[a] = 0 ;
    q.push(a) ;
    string m, n ;
    int i ;
    while( !q.empty() )
    {
        m = q.front(), q.pop() ;
        for( i = 0; i < mp[m].size(); i++)
        {
            n = mp[m][i] ;
            if( cost[n] == 0 )
            {
                cost[n] = cost[m] + 1 ;
                q.push(n) ;
            }
        }
    }
}

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

int main()
{
    int tst, i, j, k, l , m, n ;
    char a[1200] ;
    scanf("%d", &tst) ;
    //getchar() ;
    string tmp ;
    while(tst--)
    {
        while ( cin >> tmp && tmp != "*" )  v.push_back(tmp) ;
        for( i = 0; i < v.size(); ++i)
            for( j = 0; j < v.size(); ++j)
                if( i != j )
                    if( check( v[i], v[j] ))
                        mp[v[i]].push_back(v[j]) ;
        getchar() ;
        string b, c ;
        char bb[1500] , cc[1500] ;
        while( gets(a) && a[0] != '\0' )
        {
            sscanf(a, "%s %s", bb, cc) ;
            b = bb, c = cc ;
            for( i = 0; i < v.size(); i++)
                cost[v[i]] = 0 ;
            bfs(b) ;
            printf("%s %s %d\n", b.c_str() , c.c_str(), cost[c]) ;
        }
        if( tst )
            printf("\n") ;
//        for( it = mp.begin(); it != mp.end(); ++it)
//        {
//            printf("%s -> ", it->first.c_str()) ;
//            for( i = 0; i < mp[it->first].size(); ++i)
//            {
//                printf("%s ", mp[it->first][i].c_str()) ;
//            }
//            puts("") ;
//        }
    }
    return 0 ;
}
