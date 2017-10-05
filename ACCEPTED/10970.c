#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)==2&&(m!=0&&n!=0)){
        printf("%d\n",(m*n)-1);
    }
    return 0;
}
