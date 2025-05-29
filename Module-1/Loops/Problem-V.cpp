//Problem Link: https://www.codechef.com/problems/SURPLUS
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);

        int NetexportA = a1-a2;
        int NetexportB = b1-b2;
        if((NetexportA+NetexportB) >= 0)
        printf("Yes\n");
        else 
        printf("No\n");
    }
    return 0;
}