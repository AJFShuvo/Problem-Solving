//Problem Link: https://www.codechef.com/problems/HDIVISR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int ans = INT_MIN;
    for(int i = 1;i<=10;i++){
        if(n % i == 0){
            ans = max(ans,i);
        }
    }
    printf("%d\n",ans);
    return 0;
}