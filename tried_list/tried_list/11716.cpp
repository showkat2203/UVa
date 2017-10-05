#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char A[10005] , B[110][110];
    int i,j,k,l,m,n,tst;
    scanf("%d",&tst);
    getchar();
    while(tst--)
    {
        //getchar();
        gets(A);
        //puts(A);
        l = strlen(A);
        m = sqrt(l);
        if( m*m != l )
            printf("INVALID\n");
        else
        {
            k = 0;
            for(i=0;i<m;i++)
            {
                for(j = 0; j<m; j++)
                {
                    B[i][j] = A[k++];
                }
            }
            for(i=0;i<m;i++)
            {
                for(j = 0; j<m; j++)
                {
                    printf("%c",B[j][i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

