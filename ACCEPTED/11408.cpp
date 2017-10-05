#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstring>

#define MAX 5000010

bool sive[MAX];
int prime_sum[MAX];
void is_prime();
using namespace std;

int main()
{
    is_prime();
    long long  n,m,a,b,i,j,cnt;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        else
        scanf("%lld",&b);
        cnt=0;
        for(i=a;i<=b;i++)
        {
            if(sive[prime_sum[i]]==false)
                cnt++;
        }
        printf("%lld\n",cnt);
    }
}

void is_prime()
{
    int n = sqrt(MAX);
    for(int i = 2 ; i < n ; i++)
    {
        if(sive[i] ==  false)
        {
            for(int j = i + i ; j < MAX ; j = j + i)
            {
                sive[j] = true;
            }
        }
    }
    for(int i = 2 ; i < MAX ; i++)
    {
        if(sive[i] == false)
        {
            for(int j = i ; j < MAX ; j = j + i)
            {
                prime_sum[j] = prime_sum[j] + i;
            }
        }
    }
}

