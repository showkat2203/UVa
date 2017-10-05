#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, tst, cnt = 0,m, n ;
    map <string, int > mp ;
    map <string, int > :: iterator it ;
    string a, b , c ;
    char aa[1505][30], bb[1505][30] ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d %d", &m, &n) ;
        getchar() ;
        for( i = 0; i < m; i++)
            gets(aa[i]) ;
        for( i = 0; i < n; i++ )
            gets(bb[i]) ;
        for( i = 0; i < m; i++)
        {
            a = aa[i] ;
            for( j = 0; j < n; j++)
            {
                b = bb[j] ;
                c = a + b ;
                mp[c] = 1 ;
            }
        }
//        for( it = mp.begin(); it != mp.end(); it++)
//            printf("%s %d\n", it->first.c_str(), it->second) ;
        printf("Case %d: %d\n", ++cnt,  mp.size()) ;
        mp.clear() ;
    }
    return 0 ;
}
