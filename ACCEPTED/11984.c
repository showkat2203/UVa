#include<stdio.h>
int main()
{
    int i,j;
    double a,f,c,d;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%lf %lf",&c,&d);
        f = 9*c/5+d;
        a = f*5/9;
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
