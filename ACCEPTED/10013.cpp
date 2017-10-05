#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int a[1000000],b[1000000],c[1000000];

int main()
{
    int n,m,k,l,tst,f,i,j,r;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        r = 0;
        i=0;
        for(j=n-1;j>=0;j--)
        {

            f = a[j]+b[j]+r;
            if(f>=10)
            {
                c[j] = f%10;
                r = 1;
            }
            else
            {
                c[j] = f;
                r=0;
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",c[i]);
        }
        printf("\n");
        if(tst!=0)
            printf("\n");
    }
    return 0;
}
