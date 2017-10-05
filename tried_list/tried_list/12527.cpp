#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[11], m, n, i, j, k, l, cnt, f = 0 ;
    while(scanf("%d %d", &n, &m) == 2)
    {
        memset(a, 0, sizeof a);
        cnt = 0 ;
        for(i=n; i<=m; i++)
        {
            memset(a, 0, sizeof a);
            f = 0 ;
            k = i ;
            while( k !=0 )
            {
                j = k % 10 ;
                a[j]++;
                k /= 10 ;
            }
            for(l = 0; l<10; l++)
                if(a[l] >= 2)
                {
                    f = 1;
                    break ;
                }
            if(f == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0 ;
}
