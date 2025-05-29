//Problem Link: https://codeforces.com/problemset/problem/1850/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int ans = 0;
        int mx = 0;
        for(int i = 1;i<=n;i++){
            int p,q;
            scanf("%d%d",&p,&q);
             
            if(p <= 10)
            {
                if(q >= mx){
                   mx = max(q,mx);
                    ans = i;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}