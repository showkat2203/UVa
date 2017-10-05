#include <bits/stdc++.h>

using namespace std;

map < int , int > m_map ;
vector < int > m_v ;

int main()
{
    int i = 0, j, n ;
    while(scanf("%d", &n) == 1)
    {
        if(m_map[n] == 0)
            m_v.push_back(n) ;
        m_map[n]++ ;
    }
    i = m_v.size() ;
    for(j = 0; j<i; j++)
        printf("%d %d\n", m_v[j], m_map[m_v[j]]) ;
    return 0 ;
}
