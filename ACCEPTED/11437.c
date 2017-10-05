#include<stdio.h>
#include<math.h>
int main()
{
    double Ax, Ay, Bx, By, Cx, Cy ,a,b,c,s,abc,pqr ;
    int i,j,k;
    scanf("%d",&j);
    while(j--){
        scanf("%lf %lf %lf %lf %lf %lf", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        a = sqrt((Bx-Ax)*(Bx-Ax)+(By-Ay)*(By-Ay));
        b = sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
        c = sqrt((Cx-Ax)*(Cx-Ax)+(Cy-Ay)*(Cy-Ay));
        s = (a+b+c)/2;
        abc = sqrt(s*(s-a)*(s-b)*(s-c));
        pqr = ( abc  / ( 7.0 ) );
        printf("%.0lf\n",pqr);
    }
    return 0;
}
