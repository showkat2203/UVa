#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11588.txt","r", stdin);
    char C ;
    int A[26], i, j, k, l ,tst, m, n, r, c, cas = 0, ma, cnt, ans ;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d %d %d", &r, &c, &m, &n);
        ma = - 1;
        ans = 0 ;
        memset(A, 0, sizeof A);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf(" %c", &C);
                A[C-'A']++;
            }
        }
        for(i=0; i<26; i++)
            if( A[i] > ma )
                ma = A[i];
        for(i=0; i<26; i++)
        {
            if(A[i] == ma)
                ans += A[i] * m;
            else
                ans += A[i] * n;
        }
        printf("Case %d: %d\n",++cas, ans );
    }
    return 0;
}

