#include <bits/stdc++.h>

using namespace std;

int tst, i, j, k , l , m, n, cnt , new_line = 0 ;
char a[50], b[50] ;

map < string , int > M ;
map < string , int > :: iterator it ;

int main()
{
    //freopen("10226.txt", "r", stdin );
    scanf("%d\n", &tst);
    for(i=0; i<tst; i++)
    {
        cnt = 0 ;
        new_line = 0 ;
        M.clear() ;
        while( gets(b) &&  b[0] != '\0' )
        {
            sscanf(b, "%s", a);
            M[b]++;
            cnt++ ;
        }
        if( i != 0 )
            printf("\n");
        for(it = M.begin(); it != M.end(); ++it)
            printf("%s %.4lf\n", it->first.c_str(), double ( double ( it->second ) * 100.0 / double ( cnt ) ) );
        M.clear() ;
    }
    M.clear() ;
    return 0;
}

