#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, m, n ;
    string a, b, c, d, cut, first,sec ;
    scanf("%d", &n) ;
    getchar() ;
    while(n--)
    {
        getline(cin, a) ;
        getline(cin, b) ;
        l = a.size() ;
        bool f = false ;
        cut = first = sec = d = "" ;
        for( i = 0; i < l; i++ )
        {
            if( a[i] == '>' )
            {
                f = false;
                cout << cut << endl ;
                d += cut ;
                cut = "" ;
                continue ;
            }
            if( f == true )
            {
                cut += a[i] ;
                continue ;
            }
            if( a[i] == '<' )
            {
                f = true ;
                continue ;
            }
            d += a[i] ;
        }
        cout << d << endl ;
    }
    return 0 ;
}
