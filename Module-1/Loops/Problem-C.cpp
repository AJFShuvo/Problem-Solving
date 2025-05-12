//Problem Link: https://www.codechef.com/problems/DNATION
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);

        printf("%d\n",abs(n-m));
    }
    return 0;
}