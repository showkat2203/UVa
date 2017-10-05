#include<stdio.h>
long long memo[50][50];
long long  ncr(long long n,long long r){
    if(r==0)
        return 1;
    if(n==0)
        return 0;
    memo[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return memo[n][r];
}
int main()
{
    long long n,r,i,j;
    while(scanf("%lld %lld",&n,&r)==2){
        if(n==0&&r==0){
            break;
        }
        printf("%lld\n",ncr(n,r));
    }
    return 0;
}
