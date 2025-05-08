//Problem Link: https://vjudge.net/contest/715567#problem/R
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    long long int res = pow(a,b) + pow(b,a);
    printf("%lld\n", res);
    return 0;
}