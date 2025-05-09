//Problem Link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a < b){
        if(b < c)printf("Yes\n");
        else printf("No\n");
    }
    else printf("No\n");
    return 0;
}