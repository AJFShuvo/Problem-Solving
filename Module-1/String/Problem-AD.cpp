//Problem Link: https://www.codechef.com/problems/SHORTSPELL
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
        int ans = -1;
        for(int i = 0;i<n-1;i++){
           if(str[i] > str[i+1]){
             ans = i;
             break;
           }
        }
        if(ans == -1){
            ans = n-1;
        }
        for(int i = 0;i<n;i++){
            if(ans == i)continue;
            else printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}