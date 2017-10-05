#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define Max 1000000
bool seive[Max];

void is_prime();
long long prime[1000000];
long long a,b,c,d,i,j;
int main()
{
    is_prime();
    long long n,num,cnt;
    bool f;
    while(scanf("%lld",&num)==1&&num)
    {
        n=0;
        cnt=0;
        for(i=num;i>=(num/2);i--)
        {
            if(seive[i]==false && seive[num-i]==false)
            {
                cnt++;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
void is_prime()
{
    seive[0]=seive[1]=true;
    for(int i = 2; i < sqrt(Max) ; i++)
    {
        if(seive[i] == false)
        {
            for(int j = i + i ; j < Max ; j = j + i)
            {
                seive[j] = true;
            }
        }
    }

}

