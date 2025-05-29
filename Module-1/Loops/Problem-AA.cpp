//Problem Link: https://www.codechef.com/problems/PIZZAC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if( n == 1 || n % 2 == 0)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}