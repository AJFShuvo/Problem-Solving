//Problem Link: https://www.codechef.com/problems/CANDIVIDE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x % 3 == 0){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}