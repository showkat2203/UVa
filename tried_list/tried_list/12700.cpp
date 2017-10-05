#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    //freopen("12700.txt","r",stdin);
    //freopen("12700_out.txt", "w", stdout) ;
    char A[1000];
    int i,j,k,l,m,n,cnt = 0;
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d",&n);
        getchar() ;
        gets(A) ;
        int B = 0 , W = 0, D = 0, a = 0, T = 0 ;
        for( i = 0 ; i < n ; i++ )
        {
            if(A[i] == 'B')
                B++;
            else if(A[i] == 'W')
                W++;
            else if(A[i] == 'A')
                a++;
            else if(A[i] == 'T')
                T++;
        }
        printf("Case %d: ",++cnt);
        if( a == n )
            printf("ABANDONED\n");
        else if(B == n || B == abs( n - a ) )
            printf("BANGLAWASH\n");
        else if( W == n || W == abs( n - a ))
            printf("WHITEWASH\n");
        else if(B > W )
            printf("BANGLADESH %d - %d\n", B, W );
        else if( B < W )
            printf("WWW %d - %d\n", W, B );
        else if( B < W )
            printf("WWW %d - %d\n", W, B );
        else if( B == W || T == n )
            printf("DRAW %d %d\n", B, T );

    }
    return 0;
}
