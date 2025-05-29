//Problem Link: https://www.codechef.com/problems/FIZZBUZZ23_2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,d;
        scanf("%d%d%d",&n,&x,&d);

        x = x  * 5;
        n = (n/x) ;
        int ans = n +  d;
        printf("%d\n",ans);
    }
}