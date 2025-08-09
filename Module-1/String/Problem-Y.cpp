//Problem Link: https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
       char str[8];
       scanf("%s",str);
        int ans1 = (int)(str[0] + str[1] + str[2]);
        int ans2 = (int)(str[3] + str[4] + str[5]);
        // printf("ans1 = %d\n",ans1);
        // printf("ans2 = %d\n",ans2);
        if(ans1 == ans2)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}