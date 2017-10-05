#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    long long n,i,j,sum;
    while(scanf("%lld",&n)==1&&n)
    {
        if(n<=9)
            printf("%lld\n",n);
        else
        {
            while(n>=10)
            {
                sum = 0;
                while(n!=0)
                {
                    sum = sum + n %10;
                    n = n / 10;
                }
                n = sum;
            }
            printf("%lld\n",sum);
        }


    }
    return 0;
}
