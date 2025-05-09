//Problem Link:  https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;

    scanf("%d%d", &a,&b);
    double ans= a/(b*1.0);
    printf("%d %d %0.5f\n",(a/b), (a % b),ans);

    return 0;
}