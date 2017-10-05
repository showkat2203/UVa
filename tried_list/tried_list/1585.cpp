#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    long long tst, i,j,k,l,n,m,sum;
    scanf("%lld\n",&tst);
    char A[1000];
    while(tst--)
    {
        scanf("%s",A);
        int sum = 0;
        n = 0;
        for(i=0; i<strlen(A); i++)
        {
            if(A[i] == 'O')
            {
                n++;
                sum = sum + n;
            }
            else
                n = 0;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

