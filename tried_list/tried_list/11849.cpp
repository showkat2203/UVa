#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11849.txt", "r", stdin) ;
    long long  i, k, m, n, cd ;
    map < long , long > m_map ;
    while( scanf("%lld %lld", &m, &n ) == 2 && m && n )
    {
        cd = 0 ;
        for( i = 0; i<m; i++)
        {
            scanf("%lld", &k) ;
            m_map[k] = 1 ;
        }
        for( i = 0; i<n; i++)
        {
            scanf("%lld", &k) ;
            if( m_map[k] == 1 )
                cd++ ;
        }
        printf("%lld\n", cd ) ;
        m_map.clear() ;
    }
    return 0 ;
}
