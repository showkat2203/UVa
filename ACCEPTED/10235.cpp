#include<stdio.h>
#include<math.h>
#include<algorithm>

#define MAX 1000010

using namespace std;

bool seive[MAX];
void is_prime();

void is_prime()
{
    for(int i = 2; i <= sqrt(MAX) ; i++)
    {
        if(i == 2 || seive[i] == false)
        {
            for(int j = i * i ; j <= MAX ; j = j + i)
            {
                seive[j] = true;
            }
        }
    }
    seive[1]=true;
}

int main()
{
    long int a,b,n,i,j,f,g,N;
    is_prime();
    while(scanf("%ld",&n)==1){
            if(seive[n]==false)
            {
                N = n;
                f=0;
                g=0;
                while(n!=0)
                {
                    f=f*10+n%10;
                    n=n/10;
                }
                if(seive[f]==false&&f!=N)
                {
                    printf("%ld is emirp.\n",N);
                }
                else
                {
                    printf("%ld is prime.\n",N);
                }
            }
            else
            {
                printf("%ld is not prime.\n",n);
            }
        }
    return 0;

}

