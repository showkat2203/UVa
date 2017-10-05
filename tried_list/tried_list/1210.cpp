#include<bits/stdc++.h>
#define MAX 10001

using namespace std;

bool seev[MAX] ;
int prime_list[MAX], a[MAX] ;

void is_prime()
{
    memset(a, 0, sizeof a);
    int s = 0 ;
    for(int i = 2; i < sqrt(MAX) ; i++)
        if( seev[i] == false )
            for(int j = i + i ; j < MAX ; j = j + i)
                seev[j] = true;
    seev[0]=seev[1]=true;
    int k = 0 ;
    for(int i = 0 ; i < MAX ; i++)
        if( seev[i] == false )
            prime_list[k++] = i ;
    for(int i=0; i<k; i++)
    {
        s = 0 ;
        for(int j=i; j<k; j++)
        {
            s += prime_list[j] ;
            if(s > 10000)
                break;
            a[s]++;
        }
    }
}

int main()
{
    is_prime();
    int n ;
    while( scanf("%d", &n) == 1 && n )
        printf("%d\n", a[n]) ;
    return 0 ;
}
