#include <bits/stdc++.h>

using namespace std;

char a[110][110];

int main()
{
    int i, j, k = 0, l = 0, len, m , n ;
    while( gets( a[k] ) )
    {
        len = strlen(a[k]);
        l = max ( l, len );
        k++ ;
    }
    for(i = 0; i<l; i++)
    {
        for( j = k - 1; j >=0;  j--)
            if( a[j][i] == 0 )
                printf(" ") ;
            else
                printf("%c", a[j][i]) ;
        puts("") ;
    }
    return 0;
}

