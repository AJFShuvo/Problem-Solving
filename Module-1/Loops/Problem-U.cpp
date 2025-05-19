//Problem Link: https://www.codechef.com/problems/BRUNCH
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int ans = x/y;
        if(ans >= 20)printf("%d\n",20);
        else printf("%d\n",(x/y));
        
    }
    return 0;
}