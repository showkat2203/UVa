#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, i, n, j ;
    while ( scanf("%lld", &j) == 1 && j )
    {
        a = 0 ;
        for(i=1; i<=j; i++)
        {
            scanf("%lld", &n);
            a = a  ^ n ;
        }
        if( a  )
            puts("Yes");
        else
            puts("No");
    }
    return 0 ;
}
