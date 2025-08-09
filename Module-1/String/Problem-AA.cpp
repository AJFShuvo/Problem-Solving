//Problem Link: https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int ans= 0;
        int freq[27] = {0};
        for(int  i = 0;i<n;i++){
            freq[str[i] - 'A']++;
        }
       
        for(int i = 0;i<26;i++){
            if(freq[i] == 1){
                ans+=2;
            }
            else if(freq[i] > 1){
                ans+= 2 + (freq[i] - 1);
            }
            else continue;
        }
        printf("%d\n",ans);
    }
    return 0;
}