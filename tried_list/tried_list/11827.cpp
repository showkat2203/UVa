#include<cstdio>
#include<iostream>
#include<sstream>
#include<cstring>

using namespace std ;

int gcd (int a,int b)
{
    if(b==0)
        return a;
    return gcd (b,a%b);
}
int main(){
    int t,n,a[110],ans;
    int A[110];
    char  s[1000];
    scanf("%d\n",&t);
    while(t--){
        gets(s);
        stringstream ss(s);
        n = 0;
        while(ss>>a[n]){
                ++n;
        }
        ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                ans = max(ans,gcd(a[i],a[j]));
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}



