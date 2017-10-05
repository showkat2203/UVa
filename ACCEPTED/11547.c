#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d",&n);
    n=n*567;
    n=n/9;
    n=n+7492;
    n=n*235;
    n=n/47;
    n=n-498;
    a=abs((n/10)%10);
    printf("%d\n",a);
    }
    return 0;
}
