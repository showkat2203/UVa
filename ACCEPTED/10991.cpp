#include<stdio.h>
#include<math.h>
#define pi acos(-1.0);
double secarea (double r,double a,double b,double c)
{
        double teta = acos((a*a + b*b - c*c)/(2*a*b));
        return r*r*teta/2;
}
int main()
{
    int tst,j,cnt=0,k,l;
    double r1,r2,r3,a,b,c,sec_area,x,y,z,Blue_area,triangle_area,s;
    scanf("%d",&tst);
    while(tst--){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;
        x = secarea (r1,a,c,b);
        y = secarea (r2,a,b,c);
        z = secarea (r3,c,b,a);
        sec_area = x+y+z;
        s= (a+b+c)/ 2.0;
        triangle_area=sqrt((s*(s-a)*(s-b)*(s-c)));
        Blue_area=triangle_area-sec_area;
        printf("%.6lf\n",Blue_area);
    }
    return 0;
}

