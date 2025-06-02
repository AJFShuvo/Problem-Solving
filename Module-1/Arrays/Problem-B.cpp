//Problem Link: https://atcoder.jp/contests/abc307/tasks/abc307_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);

    n = n * 7;
    long int ans = 0;
    for(int i = 1;i <= n ; i++){
        long int r;
        scanf("%ld",&r);
        ans +=r;
        if(i % 7 == 0)
        {
            printf("%ld ", ans);
            ans = 0;
        }
    }

    printf("\n");
    return 0;
}