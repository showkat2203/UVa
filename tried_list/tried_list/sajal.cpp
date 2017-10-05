#include<cstdio>
#include<cmath>
#include<cstdio>


using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int i;
    long long ar[15000];
    scanf("%lld %lld",&ar[0],&ar[1]);
    for(i = 2 ; i < 15000 ; i++)
    {
        ar[i] = (ar[i - 1] + ar[i - 2]) % 10000;
    }
    for(i = 20 ; i < 15000 ; i++)
    {
        //if(ar[i] == 0 || ar[i + 1] == 1 ) break;
        printf("%d-->%lld\n",i,ar[i]);
    }
    //printf("%d",i);


}
