#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,l,n,f,r,s,i;
    //freopen("11934.txt","r",stdin);
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5){
        s=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0){
            break;
        }
        for(i=0;i<=l;i++){
            f=a*i*i+b*i+c;
            if(f%d==0){
                s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
