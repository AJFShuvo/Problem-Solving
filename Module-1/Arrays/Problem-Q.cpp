//Problem Link: https://atcoder.jp/contests/abc330/tasks/abc330_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    scanf("%d%d%d",&n,&l,&r);
    for(int i = 0;i<n;i++){
        int p;
        scanf("%d",&p);

        if( p <= l)printf("%d ", l);
        else if(p >= l && p <= r)printf("%d ",p);
        else {
            printf("%d ",r);
        }

    }
    printf("\n");
    return 0;
}