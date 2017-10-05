#include<stdio.h>
int main()
{
    long  A,B;
    int k,l,cnt;
    while(1)
    {
        scanf("%ld %ld",&A,&B);
            if(A==0&&B==0)
                break;
            cnt=0;
            k=0;
            while(A!=0||B!=0){
                if((A%10+B%10)+k>9)
                {
                    k=1;
                    cnt++;
                }
                else
                    k=0;
                A=A/10;
                B=B/10;
            }
            if(cnt==0){
                printf("No carry operation.\n");
            }
            else if(cnt==1){
                 printf("%d carry operation.\n",cnt);
            }
            else{
                printf("%d carry operations.\n",cnt);
            }
      }
    return 0;
}
