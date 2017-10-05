#include<stdio.h>
int main()
{
    long long i,j,k,l,A[100],cnt=0;
    //freopen("10450.txt","r",stdin);
    //freopen("10450(out).txt","w",stdout);
    A[0]=1;
    A[1]=2;
    for(i=2;i<51;i++){
        A[i] = A[i-2]+A[i-1];
    }
    scanf("%lld",&k);
    while(k--){
        scanf("%lld",&j);
        printf("Scenario #%lld:\n%lld\n\n",++cnt,A[j]);
    }
    return 0;
}

