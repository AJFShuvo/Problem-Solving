//Problem Link: https://atcoder.jp/contests/abc328/tasks/abc328_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum = 0,r;
    scanf("%d%d",&n,&m);
    for(int i = 0;i<n;i++){
        scanf("%d",&r);
        if(r <= m){
            sum+=r;
        }
    }
    printf("%d\n",sum);
    return 0;
}