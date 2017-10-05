#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11661.txt", "r", stdin);
    long long n, i, j, k, l, m, z, f, r, d ;
    char c ;
    while(scanf("%lld\n",&n) == 1 && n!=0 )
    {
        m = 2000005 ;
        f = 0, l = 0 ;
        for(i=0; i<n; i++)
        {
            scanf("%c", &c);
            if(c == 'Z')
                m = 0;
            else if(c == 'D')
            {
                d = i;
                f = 1;
                if(l == 1)
                    m = min (m, abs(r - d));
            }
            else if(c == 'R')
            {
                r = i;
                l = 1;
                if(f == 1)
                    m = min(m, abs(r - d));
            }
        }
        printf("%lld\n", m);
    }
    return 0;
}

