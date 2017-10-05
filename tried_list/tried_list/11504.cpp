// Name : Mohd. Imranul Hoque Limon
// INS : Daffodil International University
// Id : 102-15-1036

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stack>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <set>
#include <map>

#define pi 2*acos(0.0)
#define inf 999999999
#define gray 2
#define black 0
#define white 1
#define tru -1
#define fals -2
#define array 100005
using namespace std;

vector <int> g[array];
vector <int> gt[array];
vector <int> col;
stack <int> stck;
bool visit[array];
int cnt;

void dfs1 (int x){
    visit[x] = true;

    for(int i=0;i<g[x].size();i++)
        if(!visit[g[x][i]]) dfs1(g[x][i]);

    col.push_back(x);
}

void dfs2 (int x){
    visit[x] = false;
    //printf("%d ",x);
    for(int i=0; i<gt[x].size(); i++)
        if (visit[gt[x][i]]) dfs2(gt[x][i]);

    stck.push(x);

}

int main(){
    //#ifdef localhost
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	//#endif

	int Cases, Case = 0, i, j, n, m, l, U, V;

	scanf("%d",&Cases);
	while(Cases--){

	    col.clear();
	    while(!stck.empty()) stck.pop();

        scanf("%d %d",&n, &m);
        for(i=0; i<=n; i++){
            g[i].clear();
            gt[i].clear();
            visit[i] = false;
        }

        for(i=1; i<=m; i++){
            scanf("%d %d",&U, &V);
            g[U].push_back(V);
            gt[V].push_back(U);
        }

        for(i=1; i<=n; i++){
            if(!visit[i]){
                dfs1(i);
            }
        }

        int d, res = 0;
        cnt = 0;
        //dfs2(col[0]);
        //printf("%d")
        for(i=0; i<col.size(); i++){
            if(visit[col[i]] == true){
                //printf("call by %d\n",col[i]);
                dfs2(col[i]);
                res++;

                //printf("stack = %d\n",stck.size());
            }
        }

        printf("%d\n",res);
	}

    return 0;
}
