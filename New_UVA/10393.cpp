#include <bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, k, l, m, n, len ;
    string b ;
    map < string , int > mp ;
    map < string , int > :: iterator it ;
    while(scanf("%d %d", &m, &n) == 2 )
    {
        bool f[300] = {false} ;
        for( i = 0; i < m; i++ )
        {
            scanf("%d", &l) ;
            if(l == 1)   f['q'] = f['a'] = f['z'] = true ;

            else if( l == 2)  f['w'] = f['s'] = f['x'] = true ;

            else if( l == 3)  f['e'] = f['d'] = f['c'] = true ;

            else if( l == 4)  f['r'] = f['f'] = f['v'] = f['t'] = f['g'] = f['b'] = true ;

            else if( l == 5 || l == 6) f[32] =  true ;

            else if( l == 7)  f['y'] = f['h'] = f['n'] = f['u'] = f['j'] = f['m'] = true ;

            else if( l == 8)  f['i'] = f['k'] = f[','] = true ;

            else if( l == 9)  f['o'] = f['l'] = f['.'] = true ;

            else if( l == 10)  f['p'] = f[';'] = f['/'] = true ;
        }
        l = 0 , k = 0 , len = 0 ;
        getchar() ;
        char a[5000] ;
        bool fl ;
        while(n--)
        {
            //gets(a) ;
            scanf("%s", a) ;
            b = a ;
            l = b.size() ;
            fl = false ;
            for( i = 0; i < l; i++ )
            {
                if( f[b[i]] == true )
                {
                    fl = true ;
                    break ;
                }
            }
            if( fl == false )
            {
                if( l > len )
                {
                    len = l ;
                }
                mp[b] = 1 ;
            }
        }
        l = 0 ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            if( it->first.size() == len)
                l++;
        }
        printf("%d\n", l) ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            if( it->first.size() == len)
                printf("%s\n", it->first.c_str()) ;
        }
        mp.clear() ;
    }
    return 0 ;
}
