//Problem Link: https://codeforces.com/problemset/problem/1884/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      int x , k;
      scanf("%d%d",&x,&k);
      int ans = 0;
      while(true){
        int temp = x;
        int sumDigit = 0;
        while(temp>0){
            int rem = temp % 10;
            sumDigit+=rem;
            temp/=10;
        }
        if(sumDigit % k == 0){
            ans = x;
            break;
        }
        else {
            x++;
        }
      }
      printf("%d\n",ans);
    }
    return 0;
}