//Problem Link: https://www.codechef.com/problems/IPLTRSH
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);

        if( n <= m)printf("%d\n",0);
        else printf("%d\n",(n-m));
    }
    return 0;
}