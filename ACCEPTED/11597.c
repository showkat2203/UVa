#include<stdio.h>
int main()
{
    int n,i,j=0;
    while(scanf("%d",&n)==1&&n>1){
        printf("Case %d: %d\n",++j,n/2);
    }
    return 0;
}
