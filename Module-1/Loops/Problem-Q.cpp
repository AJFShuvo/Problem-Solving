//Prblem Link:https://www.codechef.com/problems/FAIRSHARE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int p = k+1;
        float r = floor((n*1.0/p));
        int ans = n - (k * r);
        printf("%d\n", ans);

    }
    return 0;
}