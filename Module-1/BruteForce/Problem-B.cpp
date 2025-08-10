//Problem Link:https://codeforces.com/problemset/problem/2009/A
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
    int a,b;
    scanf("%d%d",&a,&b);
    int mn = INT_MAX;
    for(int i = a; i<= b;i++){
        int r = (i - a) + (b - i);
        mn = min(r,mn);
    }
    printf("%d\n",mn);
   }
    return 0;
}