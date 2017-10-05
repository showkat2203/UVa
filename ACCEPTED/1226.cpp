#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,n,i,j,l;
    char A[10000];
    scanf("%lld",&j);
    while(j--)
    {
        scanf("%lld %s",&n,A);
        a=0;
        for(i=0;i<strlen(A);i++)
        {
            a = (a*10 +(A[i]-'0'))%n;
        }
        printf("%lld\n",a);
    }
    return 0;
}

