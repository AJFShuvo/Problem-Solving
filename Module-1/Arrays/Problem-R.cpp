//Problem Link: https://atcoder.jp/contests/abc280/tasks/abc280_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[n+1];

    ans[0] = arr[0];

    for(int i = 1;i<n;i++){
        ans[i] = arr[i] - arr[i-1];
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }
    printf("\n");
    return 0;
}