#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,tst;
    while(scanf("%lld",&tst)==1){
        for(i=1;i<=tst;i++){
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
            if(a==b&&b==c&&d==a){
                printf("square\n");
            }
            else if((a==b&&c==d)||(b==c&&d==a)||(a==c&&b==d)){
                printf("rectangle\n");
            }
            else if((a<=b+c+d)&&(b<=a+c+d)&&(c<=a+b+d)&&(d<=a+b+c)){
                printf("quadrangle\n");
            }
            else
                printf("banana\n");
        }
    }
    return 0;
}
