#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("489.txt", "r", stdin);
    char a[1010], b[1010], c[1010] ;
    int A[30], B[30],  p ,  i, j, k , l , n, ache, nai, f, g, d ;
    while(scanf("%d", &n) == 1 && n!=-1)
    {
        memset(A, 0, sizeof A);
        memset(B, 0, sizeof B);
        scanf("%s", a);     scanf("%s", b);
        ache = 0, nai = 0, f = 0, g = 0; p = 0;
        printf("Round %d\n",n);
        l = strlen(a) ;    k = strlen(b);
        for(i=0; i<l; i++)
            A[a[i] - 'a' ]++;
        j = 0 ;
        for(i=0; i<26; i++)
            if( A[i] != 0 )
                c[j++] = i + 'a' ;
        c[j] = '\0' ;
        for(i=0; i<k; i++)
        {
            d = 0 ;
            for(p=0; p<j; p++)
            {
                if( b[i] == c[p] )
                {
                    d = 1;
                    break ;
                }
            }
            if(d == 1 && B[b[i]-'a'] == 0 )
            {
                ache++;
                B[b[i] - 'a' ] = 1 ;
            }
            if( d == 0 && B[b[i] - 'a' ] == 0)
            {
                nai++;
                B[b[i] - 'a'] = 1;
            }
            if( ache == j )
            {
                printf("You win.\n");
                f = 1;
                break;
            }
            if(nai >= 7)
            {
                printf("You lose.\n");
                g = 1;
                break;
            }
        }
        if( g!= 1 && f!= 1 )
           printf("You chickened out.\n");
    }
    return 0;
}

