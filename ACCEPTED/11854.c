#include<stdio.h>
int main()
{
    int x,y,z,n,m;
    while(scanf("%d %d %d",&x,&y,&z)==3){
        if(x==0&&y==0&&z==0){
            break;
        }
        if((x*x+y*y==z*z)||(y*y+z*z==x*x)||(x*x+z*z==y*y)){
            printf("right\n");
        }
        else
            printf("wrong\n");
    }
    return 0;
}
