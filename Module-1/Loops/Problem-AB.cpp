//Problem Link: https://atcoder.jp/contests/abc151/tasks/abc151_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int sum = 0;
    for(int i = 0;i<n-1;i++)
    {
        int p;
        scanf("%d",&p);
        sum+=p;
    }

    int r = (n * m) - sum;
    
    if( r > k)printf("-1\n");
    else if(r < 0)printf("0\n");
    else printf("%d\n",r);
    
    return 0;
}