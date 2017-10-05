#include<stdio.h>
#include<math.h>

using namespace std;


int main()
{
    int a,b,c,d,f,r=1,i;
    int A[100000];
    for( i=2;i<=10000;i++)
    {
        r*=i;
        while(r%10==0)
        {
            r/=10;
        }
        r = r%100000;
        A[i] = r%10;
    }
    A[0] = A[1] = 1;
    while(scanf("%d",&a)==1)
    {
        printf("%5d -> %d\n",a,A[a]);
    }
    return 0;
}
