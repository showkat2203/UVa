#include<stdio.h>
#include<string.h>
int main()
{
    char mnt[1000],mnt1[1000];
    long long  a,b,i,j=0,k,day,year,day1,year1;
    long long  tst;
    scanf("%lld\n",&tst);
    while(tst--){
        scanf("%s %lld, %lld\n%s %lld, %lld\n",mnt,&day,&year,mnt1,&day1,&year1);
        //scanf("%s %d, %d\n",mnt1,&day1,&year1);
        int cnt=0;
        for(i=year;i<=year1;i++){
            if((i%4==0&&i%100!=0)||(i%400==0)){
                cnt++;
            }
        }
        printf("Case %lld: %d\n",++j,cnt);
    }
    return 0;
}
