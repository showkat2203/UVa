#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, r2, c1, c2 ;
    while(scanf("%d %d %d %d", &r1, &c1, &r2, &c2) == 4)
    {
        if( r1 == 0 && r2 == 0 && c1 == 0 && c2 == 0 )
            break;
        if( r1 == r2 && c1 == c2 )
            printf("0\n");
        else if( ( abs(r1-r2) == abs(c1 - c2) ) || r1 == r2 || c1 == c2 )
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
