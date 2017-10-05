#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,j,k,l,m,n,cnt=0,a,b,c;
    char sign,C[100];
    while(scanf("%d%c%d=%s",&a,&sign,&b,C)==4)
    {
        //cnt=0;
        if(sign == '+')
            l = a + b;
        else
            l = a - b;
        c = atoi(C);
        if(l == c)
            cnt++;

    }
     printf("%d\n",cnt);
    return 0;
}
