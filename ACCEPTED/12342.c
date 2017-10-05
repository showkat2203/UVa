#include<stdio.h>
#include<math.h>
int main()
{
    int b,c,d,i,j,l,m;
    double a,k,r;
    scanf("%d",&j);
    int cnt=0;
    while(j--){
        scanf("%lf",&a);
        if(a<=180000.0){
            k=0.0;
        }
        else if(a>180000.0&&a<=480000.0){
            k=((a-180000.0)*0.1);
        }
        else if(a>480000.0&&a<=880000.0){
            k=((a-480000.0)*0.15)+30000.0;
        }
        else if(a>880000.0&&a<=1180000.0){
            k=((a-880000.0)*0.2)+90000.0;
        }
        else if(a>1180000){
            k=((a-1180000.0)*.25)+150000.0;
        }
        if(k>0.0&&k<2000.0){
            k=2000.0;
        }
        l=int (k);
        if(l<k){
            l++;
        }
        printf("Case %d: %d\n",++cnt,l);
    }
    return 0;
}
