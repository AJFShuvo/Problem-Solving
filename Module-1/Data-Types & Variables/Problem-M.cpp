//Problem Link: https://vjudge.net/contest/715567#problem/M
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    scanf("%lld%lld", &n ,&m);
    long long int ans = pow(n,m);
    printf("%lld\n", ans);
    return 0;
}