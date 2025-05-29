//Problem Link: https://www.codechef.com/problems/AGENTCHEF
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        int x;
        scanf("%d",&x);
        int ans = (500/x) + (500%x > 0);     
            cout<<ans<<endl;

    }
    return 0;
}