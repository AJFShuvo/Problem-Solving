//Problem Link : https://atcoder.jp/contests/abc302/tasks/abc302_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    scanf("%lld%lld", &a , &b);
    printf("%lld\n", ((a/b) + (a % b > 0)));
    return 0;
}