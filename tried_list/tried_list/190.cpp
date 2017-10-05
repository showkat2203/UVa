#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


using namespace std;


int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,d,r,s,area,e,fg,Cx,Cy;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        s = (a+b+c)/2.0;
        d = 2.0*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
        Cx = ((x1*x1+y1*y1)*(y2-y3)+(x2*x2+y2*y2)*(y3-y1)+(x3*x3+y3*y3)*(y1-y2))/d;
        Cy = ((x1*x1+y1*y1)*(x3-x2)+(x2*x2+y2*y2)*(x1-x3)+(x3*x3+y3*y3)*(x2-x1))/d;
        printf("%.4lf %.4lf\n",Cx,Cy);

    }
    return 0;
}
