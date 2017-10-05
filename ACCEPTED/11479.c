#include<stdio.h>
int main()
{
    long int a,b,c,i,j,cases=0;
    while(scanf("%ld",&j)==1){
        if(j>0&&j<20){
            for(i=1;i<=j;i++){
                scanf("%ld %ld %ld",&a,&b,&c);
                if(a+b>c&&b+c>a&&c+a>b){
                    if(a==b&&a==c&&c==a)
                        printf("Case %ld: Equilateral\n",i);
                    else if(a==b||b==c||c==a)
                        printf("Case %ld: Isosceles\n",i);
                    else if(a!=b&&b!=c&&c!=a)
                        printf("Case %ld: Scalene\n",i);
                }
                else
                    printf("Case %ld: Invalid\n",i);
            }
        }
    }
    return 0;

}
