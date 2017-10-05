#include<stdio.h>
int main()
{
    long int a,b,c,i,j,cases=0;
    scanf("%ld",&j);
    for(i=1;i<=j;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b<=c)||(b+c<=a)||(c+a<=b)){
                printf("Wrong!!\n");
        }
        else{
            printf("OK\n");
        }
    }
    return 0;

}
