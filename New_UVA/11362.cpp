#include <bits/stdc++.h>

using namespace std ;

map < string, int > mp ;
map < string, int > :: iterator it ;

int main()
{
    string a[15000], b ;
    int i, j, k, l, tst, cas = 0;
    scanf("%d", &tst) ;
    while(tst--)
    {
        bool fl = false ;
        scanf("%d", &j) ;

        for( i = 0; i < j; i++ )
            cin >> a[i] ;
        sort(a, a + j ) ;
        for( i = 0; i < j; i++ )
        {
            b = "" ;
            for( k = 0; k < a[i].size(); k++ )
            {
                b += ( a[i][k]) ;
                if( mp[b] == 1 )
                {
                    fl = true ;
                }
            }
            mp[a[i]] = 1 ;
        }
        //printf("Case %d: ", ++cas ) ;
        if( fl == true )
            printf("NO\n") ;
        else
            puts("YES") ;
        mp.clear() ;
    }
    return 0 ;
}
