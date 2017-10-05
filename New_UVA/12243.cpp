#include <bits/stdc++.h>

typedef long long ll ;

using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int i, k, n, j, cas = 0, tst ;
    char a[1010], *p,  chek ;
    vector < char > v ;
    while( gets(a) && a[0] != '*' )
    {
        v.clear() ;
        bool fl = true ;
        p = strtok(a, " ") ;
        while( p != NULL )
        {
            v.push_back(tolower(p[0])) ;
            p = strtok(NULL, " ") ;
        }
        k = v.size() ;
        chek = v[0] ;
        for( i = 1; i < k ; i++ )
        {
            if( v[i] != chek )
            {
                fl = false ;
                break ;
            }
        }
        if( fl )
            puts("Y") ;
        else
            puts("N") ;
    }
    return 0 ;
}

