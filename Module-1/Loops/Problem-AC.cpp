//Problem Link: https://lightoj.com/problem/greetings-from-lightoj
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int p,q;
        scanf("%d%d",&p,&q);
        printf("Case %d: %d\n",i,(p+q));
    }
    return 0;
}