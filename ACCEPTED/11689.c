#include<stdio.h>
int main()
{
    int e,f,c,a,b,j,k,l,i;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d %d %d",&e,&f,&c);
        l=0;
        b=e+f;
        while(b>=c){
            a=b/c;
            l=l+a;
            b=a+(b%c);
        }
        printf("%d\n",l);
    }
    return 0;
}
