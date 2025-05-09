//Problem Link: https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    scanf("%lld%lld", &n ,&m);
    long long int ans = pow(n,m);
    printf("%lld\n", ans);
    return 0;
}