#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    int a, B[10050],i,j,k,l,m,n;
    while(scanf("%d %d",&j,&n) == 2)
    {
        memset(B,-2,sizeof B);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            B[a] = 0;
        }
        if(j == n)
            printf("*");
        else
            for(i = 1 ;i<= j; i++)
            {
                if(B[i] != 0)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
    }
    return 0;
}
