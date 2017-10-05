#include<stdio.h>
int main()
{
    int t1,t2,f,pr,c1,c2,c3,a,i,j,res;
    while(scanf("%d",&j)==1){
        for(i=1;i<=j;i++){
                res=0;
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&pr,&c1,&c2,&c3);
            if(c1<=c2&&c1<=c3){
                a=(c2+c3)/2;
                }
            else if(c2<=c1&&c2<=c3){
                a=(c1+c3)/2;
                }
            else if(c3<=c1&&c3<=c2){
                a=(c1+c2)/2;
                }
                res=t1+t2+f+pr+a;
            if(res>=90){
                printf("Case %d: A\n",i);
                }
            else if(res>=80){
                printf("Case %d: B\n",i);
                }
            else if(res>=70){
                printf("Case %d: C\n",i);
                }
            else if(res>=60){
                printf("Case %d: D\n",i);
                }
            else if(res<60){
                printf("Case %d: F\n",i);
                }
            }
        }
    return 0;
}
