#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long F_cube, S_cube, T_cube, s_cube ;
    for(long long i = 6; i<=200; i++)
    {
        F_cube = i * i * i ;
        for(long long j = 2; j<i; j++)
        {
            S_cube = j * j * j ;
            for(long long k = j; k<i; k++)
            {
                T_cube = k * k * k ;
                for(long long l = k; l<i; l++)
                {
                    s_cube = l * l * l ;
                    if( F_cube == (s_cube + S_cube + T_cube) )
                    {
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n", i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}
