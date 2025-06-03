//Problem Link: https://atcoder.jp/contests/abc235/tasks/abc235_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    scanf("%d",&n);

    int arr[n];
    
    for(int i = 0;i<n;i++)scanf("%d",&arr[i]);

    int ans = 0;
    for(int i =0;i<n;i++){
      //  printf("ans = %d\n",ans);
        if(ans < arr[i])
         ans  = max(ans,arr[i]);
         else break;
    }
    printf("%d\n",ans);
    return 0;
}