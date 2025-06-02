//Problem Link: https://atcoder.jp/contests/abc290/tasks/abc290_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n+1];
    for(int i  = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[m+1];

    for(int i = 0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int ans = 0;
    for(int i = 0;i<m;i++){
        ans+=arr[arr2[i]-1];
    }

    printf("%d\n",ans);
}