#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long long i,j,k,l,a,b,c,n;
    char A[100000],sign;
    while(scanf("%s %c %lld",A,&sign,&n)==3){
        a=0;
        b=0;
        l=strlen(A);
        if(sign=='%'){
            for(i=0;i<l;i++){
                a = a*10+(A[i]-'0');
                a = a%n;
            }
            printf("%lld\n",a);
        }
        else if(sign=='/'){
            for(i=0;i<l;i++){
                a = a*10+(A[i]-'0');
                if(a/n!=0){
                    b=1;
                }
                if(b==1){
                    printf("%lld",a/n);
                }
                a= a%n;
            }
            if(b==0)
                printf("0");
            printf("\n");
        }
    }
    return 0;
}
