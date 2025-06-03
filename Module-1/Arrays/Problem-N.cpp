//Problem Link: https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int arr[n];
        long long int freq[n + 1] = {};

        for(int i = 0;i<n;i++){
            
            scanf("%lld",&arr[i]);
            freq[arr[i]]++;
        }
        bool flag = false;
        int index = 0;
        for(int i = 0;i<=n;i++){
            if(freq[i] >=3){
                flag = true;
                index = i;
                break;
            }
        }
        
        if(flag)printf("%d\n",index);
        else printf("%d\n",-1);

  }
    return 0;
}