#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifdef Sonnet
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,kase=0;
    int e,  a, b, c, d, res ;
    while ( scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) == 5 )
    {
        if( a == 0 && b == 0 && c == 0 && d == 0 && e == 0 )
            break ;
        printf("%d\n", a * b * c * (d *d) * ( e * e)) ;
    }
    return 0;
}

