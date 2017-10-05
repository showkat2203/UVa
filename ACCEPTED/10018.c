#include<stdio.h>
#include<string.h>
int main()
{
    long long n,j,b,f,r,sum;
    scanf("%lld",&j);
    while(j--){
        scanf("%lld",&n);
        f = 0;
        b = n;
        while(1){
            sum = 0;
            while(b!=0){
                r = b%10;
                sum = sum*10 + r;
                b = b / 10;
            }
            if(sum == n){
                break ;
            }
            else {
                b = sum + n ;
                n = sum + n ;
                f++;
            }
        }
        printf("%lld %lld\n",f,n);
    }
    return 0;
}
