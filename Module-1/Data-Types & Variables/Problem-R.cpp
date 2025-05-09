//Problem Link: https://atcoder.jp/contests/abc320/tasks/abc320_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    long long int res = pow(a,b) + pow(b,a);
    printf("%lld\n", res);
    return 0;
}