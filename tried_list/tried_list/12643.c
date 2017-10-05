#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d",&a,&b,&c)==3){
            d=abs(b-c);
            printf("%d\n",d);
        }
    return 0;
}
