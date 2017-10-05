#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, m, n ;
    char a[1010100] ;
    string bb ;
    while( scanf("%d %s", &m, &a) == 2 )
    {
        l = strlen(a) ;
        k = 0 ;
        map < string, int > mp ;
        map < string, int > :: iterator it ;

        for( i = 0; i < l; i++ )
        {
            k = 0 ;
            bb = "" ;
            for( j = i; j < i + m; j++ )
            {
                bb += a[j] ;
            }
            if( bb.size() == m )
                mp[bb]++;
            bb.clear() ;
        }
        l = 0 ;
        bb.clear() ;
        for( it = mp.begin(); it != mp.end(); it++)
        {
            if( it->second > l)
            {
                l = it->second ;
                bb = it->first ;
            }
        }
        cout << bb << endl ;
    }
    return 0;
}
