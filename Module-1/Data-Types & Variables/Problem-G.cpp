//Problem Link : https://vjudge.net/contest/715567#problem/G
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    scanf("%lld%lld", &a , &b);
    printf("%lld\n", ((a/b) + (a % b > 0)));
    return 0;
}