//Problem Link: https://atcoder.jp/contests/abc368/tasks/abc368_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    scanf("%d%d",&n,&k);
    int arr[n+1];
    for(int i = 0;i<n;i++)
    scanf("%d",&arr[i]);

    int ans[n+1] ={0};

    int p = 0;

    for(int i = n-k;i<n;i++){
        ans[p++] = arr[i];
       
    }
   
    for(int i = 0;i<n-k;i++){
        
        ans[p++] = arr[i];
    }
    for(int i = 0;i<n;i++)printf("%d ",ans[i]);
    printf("\n");
    return 0;
}