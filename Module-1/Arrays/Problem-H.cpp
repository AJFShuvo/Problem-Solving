//Problem Link: https://atcoder.jp/contests/abc286/tasks/abc286_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,r,s;
    
    scanf("%d%d%d%d%d",&n,&p,&q,&r,&s);

    int arr[n+1];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = p-1,j = r-1;i<q;i++,j++){
        swap(arr[i],arr[j]);
    }

    for(int i = 0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}