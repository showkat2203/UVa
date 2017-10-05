#include<stdio.h>
int min(int m,int n){
    if(m>n){
        return n;
    }
    else {
        return m;
    }
}
int main()
{
    int m,n,d,tst,res;
    char c;
    scanf("%d",&tst);
    while(tst--){
         scanf("\n%c %d %d",&c,&m,&n);
        if(c=='r'||c=='Q'){
                res=min(m,n);
                printf("%d\n",res);
        }
        else if(c=='K'){
            res=((m+1)/2)*((n+1)/2);
            printf("%d\n", res);
        }
        else {
            res=((m+1)/2)*((n+1)/2)+(m/2)*(n/2);
            printf("%d\n",res);
        }
    }
    return 0;
}
