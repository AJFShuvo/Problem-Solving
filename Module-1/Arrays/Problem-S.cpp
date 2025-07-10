//Problem Link: https://codeforces.com/problemset/problem/1878/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
    scanf("%d%d",&n,&k);
    bool flag = false;
    for(int i = 0;i<n;i++)
    {
        int p;
        scanf("%d",&p);
        if(p == k)flag = true;
    }

    if(flag)printf("Yes\n");
    else printf("No\n");
    }
    return 0;
}