#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100000

using namespace std;

bool seev[MAX];

void is_prime()
{
    for(int i = 2; i < sqrt(MAX) ; i++)
    {
        if(seev[i] == false)
        {
            for(int j = i + i ; j < MAX ; j = j + i)
            {
                seev[j] = true;
            }
        }
    }
    seev[0]=seev[1]=true;
}
int main()
{
    long long a,b,c,d,n,m,max,min,k,w,x,j,i,y,z,f;
    is_prime();
    while(scanf("%lld %lld",&n,&m)==2)
    {
        k=-1;
        d = 0;
        b = 0;
        f=0;
        for(i=n;i<m;i++)
        {
            if(seev[i]==false)
            {
                for(j=i+1;j<m;j++)
                {
                    if(seev[j]==false)
                    {
                        d = j - i;
                        if(d>k)
                        {
                            k = d;
                            w = i;
                            x = j;
                            f=1;
                        }
                        if(b<d)
                        {
                            b = d;
                            a = i;
                            c = j;
                            f=1;
                        }
                    }
                }
            }
        }
        if(f==1)
        {
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,c,w,x);
        }
        else
        {
            printf("There are no adjacent primes.\n");
        }
    }
    return 0;
}
