//Problem Link: https://www.codechef.com/problems/SPCP2
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,n;
        scanf("%d%d",&x,&n);
        int ans = (n/100) + (n % 100 > 0);
        if(x > ans)printf("%d\n",0);
        else printf("%d\n",abs(x-ans));
    }
    return 0;
}