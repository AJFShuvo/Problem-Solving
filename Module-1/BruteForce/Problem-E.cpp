//Problem Link: https://atcoder.jp/contests/abc324/tasks/abc324_b
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    scanf("%lld",&n);
    int x = 0;
    int y = 0;
    long long int t = n;
    while(t%2 == 0){
        x++;
        t/=2;
    }
    while(t%3 == 0){
        y++;
        t/=3;
    }
    if(t == 1)printf("Yes\n");
    else printf("No\n");
    return 0;
}