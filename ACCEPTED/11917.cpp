#include<bits/stdc++.h>

int main()
{
    char A[110][110], B[1010] ;
    int a[110], i, j, k, l, d, cnt = 0 ;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&j);

        for(i = 0; i < j ; i++ )
            scanf("%s %d", &A[i], &a[i]);

        scanf("%d", &d);
        scanf("%s", B);
        l = 0;
        for(i = 0 ; i < j; i++)
        {
            if( strcmp( A[i], B) == 0 )
            {
                if( a[i] <= d )
                    l = 1;
                else if( a[i] <= d + 5 )
                    l = 2;
                else
                    l = 0;
            }
        }
        if( l == 1)
            printf("Case %d: Yesss\n", ++cnt);
        else if(l==2)
            printf("Case %d: Late\n", ++cnt);
        else
            printf("Case %d: Do your own homework!\n", ++cnt);
    }
    return 0;
}
