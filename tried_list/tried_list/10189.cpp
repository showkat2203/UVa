#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
   // freopen("10189.txt","r",stdin);
    char A[110][110];
    int  a[110][110], i , j , k , l, m, n, cnt=0;
    while(scanf("%d %d",&n,&m)==2 && n && m)
    {
        memset(a,0,sizeof a);
        if(cnt != 0)
            printf("\n");
        for(i=0;i<n; i++)
        {
            for(j=0; j<m; j++)
                scanf(" %c",&A[i][j]);
        }
        k = 0;
        l = 0;
        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if( A[i][j] == '*')
                {
                    a[i][j] = -1;
                    k = i - 1;
                    l = j - 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i - 1;
                    l = j + 0;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i - 1;
                    l = j + 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i + 0;
                    l = j - 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i + 1;
                    l = j - 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i + 1;
                    l = j + 0;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i + 0;
                    l = j + 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                    k = i + 1;
                    l = j + 1;
                    if(A[k][l] == '.' && (k < n && k>=0) && (l<m && l >= 0))
                        a[k][l] = a[k][l] + 1;
                }
            }
        }
        printf("Field #%d:\n",++cnt);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m; j++)
            {
                if(a[i][j] == -1)
                    printf("*");
                else
                    printf("%d",a[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
