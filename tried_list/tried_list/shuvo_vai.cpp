#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1010], i, j, k, l, m, tst, n, cnt ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d", &n) ;
        cnt = 0 ;
        for(i = 0; i<n; i++)    scanf("%d", &a[i]) ;
        sort(a, a + i) ;
        for(i = 0; i<n; i++)
        {
            for(j = i + 1; j<n; j++)
            {
                for(k = j + 1; k <n; k++)
                {
                    if( a[i] != a[j] && a[i] != a[k] && a[j] != a[k] )
                    {
                        cnt++ ;
                    }
                }
            }
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}
