#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,s,ans,res;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
            s =(a+b+c)/2;
            res = (s*(s-a)*(s-b)*(s-c));
            if(res<=0){
                ans = -1.000;
            }
            else {
                res = sqrt(res);
                ans = ((res *4.0)/3.0);
            }
            printf("%0.3lf\n",ans);
    }
    return 0;
}




