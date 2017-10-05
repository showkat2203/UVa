#include<cstdio>
#include<cmath>

#define Max 10000001

using namespace std;

double fact[Max];
int i,j,k,a,b,n;
int res;

void seive()
{
    fact[1] = 0.0;
    for(i=2;i<=Max;i++)
        fact[i] = fact[i-1] + log10(i);
}

int main()
{
    seive();
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d",&n);
        res = (fact[n]) + 1;
        printf("%d\n", res);
    }
    return 0;
}
