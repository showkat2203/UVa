#include<stdio.h>
#include<string.h>
int main()
{
    double a,b,c,d,res,j,k;
    int i=0;
    scanf("%lf",&j);
    for(k=1;k<=j;k++){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        res=a+b+c;
        if((res<=125&&d<=7)||(a<=56&&b<=45&&c<=25&&d<=7)){
                printf("1\n");
                i=i+1;
        }
        else {
            printf("0\n");
        }
    }
    printf("%d\n",i);
    return 0;
}

