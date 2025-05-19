//Problem Link: https://www.codechef.com/problems/CHESS_PAIR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int unrated = (2*n) - x;
        if(unrated <= x)printf("%d\n",(x-unrated));
        else printf("%d\n",0);
    }
    return 0;
}