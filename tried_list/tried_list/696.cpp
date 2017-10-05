#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c , res , ans ;
    while(scanf("%d %d", &r, &c) == 2)
    {
        if( r == 0 && c == 0 )
            break ;
        if( r == 1 || c == 1 )
            res = max( r, c);
        else if( r == 2 )
        {
            res = c / 4 * 4 ;
            if( c % 4 == 1 )
                res+=2;
            else if ( c % 4 > 1 )
                res+= 4 ;
        }
        else if( c == 2 )
        {
            res = r / 4 * 4 ;
            if( r % 4 == 1 )
                res+=2;
            else if( r % 4 > 1 )
                res += 4;
        }
        else
            res = ( ( r * c) + 1 ) / 2;
        printf("%d knights may be placed on a %d row %d column board.\n", res, r, c );
    }
    return 0;
}
