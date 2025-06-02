//Problem Link: https://atcoder.jp/contests/abc284/tasks/abc284_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count = 0;
        scanf("%d",&n);

        int arr[n];

        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        for(int i = 0 ;i<n;i++){
            if(arr[i] % 2 == 1)count++;
        }
        printf("%d\n",count);

    }
    return 0;
}