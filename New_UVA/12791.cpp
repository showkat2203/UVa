#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, d , cnt = 0, e, f ;
    while ( scanf("%d %d", &a, &b) == 2)
    {
        cnt = 1 ;
        d = max( a, b ) ;
        //printf("%d %d\n", a, b) ;
        e = a, f = b ;
        while ( abs(a - b) < d )
        {
            a += e ;
            b += f ;
            //printf("%d %d\n", a, b) ;
            cnt++;
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}
