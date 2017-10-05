#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
    int i,j,a,b,l,m,n;
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d",&n);
        b = -1;
        m = 101;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>b)
            {
                b = a;
            }
            if(a<m)
            {
                m = a;
            }
        }
        printf("%d\n",2*(b-m));
    }
    return 0;
}
