//Problem Link: https://codeforces.com/problemset/problem/1560/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k, ans = 1,r = 1;
        scanf("%d",&k);
        
        for(int i = 1;;i++){
            if(i % 10 == 3 || i % 3 == 0)continue;;

            if(ans == k){printf("%d\n",i);
                break;
            }
            ans++;
        }
}
    return 0;
}