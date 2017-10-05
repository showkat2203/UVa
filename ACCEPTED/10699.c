#include<stdio.h>
#include<math.h>

int main()
{
    long long  i,j,n=0,cnt=0,c,num;
    while(scanf("%lld",&num)==1&&num){
            cnt=0;
        printf("%lld : ",num);
        for(i=2;i<=sqrt(num);i++){
            j=0;
            while(num%i==0){
                if(j==0)
                    cnt++;
                num=num/i;
                j++;
            }
        }
        if(num!=1)
            cnt++;
        printf("%lld\n",cnt);
    }
    return 0;
}

