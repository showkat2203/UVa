#include<cstdio>
#include<cstring>

using namespace std;

int month(char A[])
{
    if(strcmp(A,"January")==0){
        return 1;
    }
    else if(strcmp(A,"February")==0){
        return 2;
    }
    else if(strcmp(A,"March")==0){
        return 3;
    }
    else if(strcmp(A,"April")==0){
        return 4;
    }
    else if(strcmp(A,"May")==0){
        return 5;
    }
    else if(strcmp(A,"June")==0){
        return 6;
    }
    else if(strcmp(A,"July")==0){
        return 7;
    }
    else if(strcmp(A,"August")==0){
        return 8;
    }
    else if(strcmp(A,"September")==0){
        return 9;
    }
    else if(strcmp(A,"October")==0){
        return 10;
    }
    else if(strcmp(A,"November")==0){
        return 11;
    }
    else if(strcmp(A,"December")==0){
        return 12;
    }
}

int main()
{
    char A[10000];
    long long a,b,c,i,j,k,l,m,y,u,n,v,w,cnt=0;
    scanf("%lld\n",&a);
    while(a--){
        scanf("%s %lld, %lld",A,&m,&y);
        j=month(A);
        scanf("%s %lld, %lld",A,&n,&w);
        k=month(A);
        if(j>2){
            y++;
        }
        if(k<2||(k==2&&n<29)){
            w--;
        }
        l = w/4-(y-1)/4;
        l = l-(w/100-(y-1)/100);
        l = l+(w/400-(y-1)/400);
        printf("Case %lld: %lld\n",++cnt,l);
    }
    return 0;
}

