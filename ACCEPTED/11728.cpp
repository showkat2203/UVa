#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, n, m, i, j, sum, r, cnt = 0 ;
    while( scanf("%lld",&n) == 1 && n )
    {
        sum = 0 ;
        int f = 0 ;
        for(i = n ; i > 0 ; i--)
        {
            sum = 0 ;
            for(j = 1 ; j <= i/2 ; j++)
                if(i % j == 0)
                    sum += j;
            sum += i;
            if(sum == n)
            {
                r = i ;
                f = 1 ;
                break ;
            }
        }
        if(f == 0 )
           printf("Case %lld: -1\n",++cnt);
        else
            printf("Case %lld: %lld\n",++cnt,r);
    }
    return 0;
}

