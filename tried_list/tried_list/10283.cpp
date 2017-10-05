#include<stdio.h>
#include<math.h>
int main()
{
    double n,R,r,res;
    double PI=3.1415926535897932;
    while(scanf("%lf%lf",&R,&n)==2)
    {
        r=(sin(PI/n)*R)/(sin(PI/n)+1);
        printf("%.10lf\n",r);
    }
    return 0;
}

