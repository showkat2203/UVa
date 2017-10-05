#include<stdio.h>
#include<algorithm>
using namespace std;
long int A[2000010],i,n;
int main()
{
    while (scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        for (i=0;i<n;i++)
            scanf("%ld",&A[i]);
            sort(A,A+i);
        for (i=0;i<n;i++)
        {
            printf("%ld",A[i]);
            if (i<(n-1)){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

